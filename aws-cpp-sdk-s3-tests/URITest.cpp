#include <aws/external/gtest.h>
#include <aws/s3/S3URI.h>

using namespace Aws::S3;

TEST(URITest, DefaultConstructor)
{
    S3URI uri;
    EXPECT_EQ(Scheme::HTTP, uri.GetScheme());
    EXPECT_EQ(80, uri.GetPort());
}

TEST(URITest, VirtualHostedStyle)
{
    S3URI uri{"https://my-bucket.s3.us-west-2.amazonaws.com/puppy.png?versionId=123"};
    EXPECT_EQ(uri.GetBucket(), "my-bucket");
    EXPECT_EQ(uri.GetKey(), "puppy.png");
    EXPECT_EQ(uri.GetRegion(), "us-west-2");
    EXPECT_EQ(uri.GetVersionId(), "123");
    EXPECT_EQ(uri.GetIsPathStyle(), false);

    S3URI noRegionUri{"https://opsworks-demo-bucket.s3.amazonaws.com/opsworks_cookbook_demo.tar.gz"};
    EXPECT_EQ(noRegionUri.GetBucket(), "opsworks-demo-bucket");
    EXPECT_EQ(noRegionUri.GetKey(), "opsworks_cookbook_demo.tar.gz");
    EXPECT_EQ(noRegionUri.GetRegion(), "");
    EXPECT_EQ(noRegionUri.GetVersionId(), "");
    EXPECT_EQ(noRegionUri.GetIsPathStyle(), false);
}

TEST(URITest, PathStyle)
{
    S3URI uri{"https://s3.us-east-1.amazonaws.com/mybucket/puppy.jpg?versionId=123"};
    EXPECT_EQ(uri.GetBucket(), "mybucket");
    EXPECT_EQ(uri.GetKey(), "puppy.jpg");
    EXPECT_EQ(uri.GetRegion(), "us-east-1");
    EXPECT_EQ(uri.GetVersionId(), "123");
    EXPECT_EQ(uri.GetIsPathStyle(), true);

    S3URI noRegionUri{"https://s3.amazonaws.com/opsworks-demo-bucket/opsworks_cookbook_demo.tar.gz"};
    EXPECT_EQ(noRegionUri.GetBucket(), "opsworks-demo-bucket");
    EXPECT_EQ(noRegionUri.GetKey(), "opsworks_cookbook_demo.tar.gz");
    EXPECT_EQ(noRegionUri.GetRegion(), "");
    EXPECT_EQ(noRegionUri.GetVersionId(), "");
    EXPECT_EQ(noRegionUri.GetIsPathStyle(), true);

    S3URI unicodeUri{"https://s3.us-east-2.amazonaws.com/bucketname/123—456/"};
    EXPECT_EQ(unicodeUri.GetBucket(), "bucketname");
    EXPECT_EQ(unicodeUri.GetKey(), "123—456/");
    EXPECT_EQ(unicodeUri.GetRegion(), "us-east-2");
    EXPECT_EQ(unicodeUri.GetVersionId(), "");
    EXPECT_EQ(unicodeUri.GetIsPathStyle(), true);
}

TEST(URITest, S3Scheme)
{
    S3URI uri{"s3://mybucket/puppy.jpg"};
    EXPECT_EQ(uri.GetBucket(), "mybucket");
    EXPECT_EQ(uri.GetKey(), "puppy.jpg");
    EXPECT_EQ(uri.GetRegion(), "");
    EXPECT_EQ(uri.GetVersionId(), "");
    EXPECT_EQ(uri.GetIsPathStyle(), false);
}
