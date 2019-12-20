/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A complex type that describes the Amazon S3 bucket, HTTP server (for example,
   * a web server), Amazon MediaStore, or other server from which CloudFront gets
   * your files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionOriginItem">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginItem
  {
  public:
    AwsCloudFrontDistributionOriginItem();
    AwsCloudFrontDistributionOriginItem(Aws::Utils::Json::JsonView jsonValue);
    AwsCloudFrontDistributionOriginItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin.</p>
     */
    inline AwsCloudFrontDistributionOriginItem& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin.</p>
     */
    inline AwsCloudFrontDistributionOriginItem& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 origins: The DNS name of the Amazon S3 bucket from which you want
     * CloudFront to get objects for this origin.</p>
     */
    inline AwsCloudFrontDistributionOriginItem& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>A unique identifier for the origin or origin group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the origin or origin group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the origin or origin group.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the origin or origin group.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the origin or origin group.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the origin or origin group.</p>
     */
    inline AwsCloudFrontDistributionOriginItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the origin or origin group.</p>
     */
    inline AwsCloudFrontDistributionOriginItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the origin or origin group.</p>
     */
    inline AwsCloudFrontDistributionOriginItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin.</p>
     */
    inline const Aws::String& GetOriginPath() const{ return m_originPath; }

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin.</p>
     */
    inline bool OriginPathHasBeenSet() const { return m_originPathHasBeenSet; }

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin.</p>
     */
    inline void SetOriginPath(const Aws::String& value) { m_originPathHasBeenSet = true; m_originPath = value; }

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin.</p>
     */
    inline void SetOriginPath(Aws::String&& value) { m_originPathHasBeenSet = true; m_originPath = std::move(value); }

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin.</p>
     */
    inline void SetOriginPath(const char* value) { m_originPathHasBeenSet = true; m_originPath.assign(value); }

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin.</p>
     */
    inline AwsCloudFrontDistributionOriginItem& WithOriginPath(const Aws::String& value) { SetOriginPath(value); return *this;}

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin.</p>
     */
    inline AwsCloudFrontDistributionOriginItem& WithOriginPath(Aws::String&& value) { SetOriginPath(std::move(value)); return *this;}

    /**
     * <p>An optional element that causes CloudFront to request your content from a
     * directory in your Amazon S3 bucket or your custom origin.</p>
     */
    inline AwsCloudFrontDistributionOriginItem& WithOriginPath(const char* value) { SetOriginPath(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_originPath;
    bool m_originPathHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
