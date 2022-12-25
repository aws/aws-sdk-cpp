/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/Identity.h>
#include <aws/iotsitewise/model/Resource.h>
#include <aws/iotsitewise/model/Permission.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class DescribeAccessPolicyResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeAccessPolicyResult();
    AWS_IOTSITEWISE_API DescribeAccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the access policy.</p>
     */
    inline const Aws::String& GetAccessPolicyId() const{ return m_accessPolicyId; }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline void SetAccessPolicyId(const Aws::String& value) { m_accessPolicyId = value; }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline void SetAccessPolicyId(Aws::String&& value) { m_accessPolicyId = std::move(value); }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline void SetAccessPolicyId(const char* value) { m_accessPolicyId.assign(value); }

    /**
     * <p>The ID of the access policy.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyId(const Aws::String& value) { SetAccessPolicyId(value); return *this;}

    /**
     * <p>The ID of the access policy.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyId(Aws::String&& value) { SetAccessPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the access policy.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyId(const char* value) { SetAccessPolicyId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline const Aws::String& GetAccessPolicyArn() const{ return m_accessPolicyArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline void SetAccessPolicyArn(const Aws::String& value) { m_accessPolicyArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline void SetAccessPolicyArn(Aws::String&& value) { m_accessPolicyArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline void SetAccessPolicyArn(const char* value) { m_accessPolicyArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyArn(const Aws::String& value) { SetAccessPolicyArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyArn(Aws::String&& value) { SetAccessPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyArn(const char* value) { SetAccessPolicyArn(value); return *this;}


    /**
     * <p>The identity (IAM Identity Center user, IAM Identity Center group, or IAM
     * user) to which this access policy applies.</p>
     */
    inline const Identity& GetAccessPolicyIdentity() const{ return m_accessPolicyIdentity; }

    /**
     * <p>The identity (IAM Identity Center user, IAM Identity Center group, or IAM
     * user) to which this access policy applies.</p>
     */
    inline void SetAccessPolicyIdentity(const Identity& value) { m_accessPolicyIdentity = value; }

    /**
     * <p>The identity (IAM Identity Center user, IAM Identity Center group, or IAM
     * user) to which this access policy applies.</p>
     */
    inline void SetAccessPolicyIdentity(Identity&& value) { m_accessPolicyIdentity = std::move(value); }

    /**
     * <p>The identity (IAM Identity Center user, IAM Identity Center group, or IAM
     * user) to which this access policy applies.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyIdentity(const Identity& value) { SetAccessPolicyIdentity(value); return *this;}

    /**
     * <p>The identity (IAM Identity Center user, IAM Identity Center group, or IAM
     * user) to which this access policy applies.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyIdentity(Identity&& value) { SetAccessPolicyIdentity(std::move(value)); return *this;}


    /**
     * <p>The IoT SiteWise Monitor resource (portal or project) to which this access
     * policy provides access.</p>
     */
    inline const Resource& GetAccessPolicyResource() const{ return m_accessPolicyResource; }

    /**
     * <p>The IoT SiteWise Monitor resource (portal or project) to which this access
     * policy provides access.</p>
     */
    inline void SetAccessPolicyResource(const Resource& value) { m_accessPolicyResource = value; }

    /**
     * <p>The IoT SiteWise Monitor resource (portal or project) to which this access
     * policy provides access.</p>
     */
    inline void SetAccessPolicyResource(Resource&& value) { m_accessPolicyResource = std::move(value); }

    /**
     * <p>The IoT SiteWise Monitor resource (portal or project) to which this access
     * policy provides access.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyResource(const Resource& value) { SetAccessPolicyResource(value); return *this;}

    /**
     * <p>The IoT SiteWise Monitor resource (portal or project) to which this access
     * policy provides access.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyResource(Resource&& value) { SetAccessPolicyResource(std::move(value)); return *this;}


    /**
     * <p>The access policy permission. Note that a project <code>ADMINISTRATOR</code>
     * is also known as a project owner.</p>
     */
    inline const Permission& GetAccessPolicyPermission() const{ return m_accessPolicyPermission; }

    /**
     * <p>The access policy permission. Note that a project <code>ADMINISTRATOR</code>
     * is also known as a project owner.</p>
     */
    inline void SetAccessPolicyPermission(const Permission& value) { m_accessPolicyPermission = value; }

    /**
     * <p>The access policy permission. Note that a project <code>ADMINISTRATOR</code>
     * is also known as a project owner.</p>
     */
    inline void SetAccessPolicyPermission(Permission&& value) { m_accessPolicyPermission = std::move(value); }

    /**
     * <p>The access policy permission. Note that a project <code>ADMINISTRATOR</code>
     * is also known as a project owner.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyPermission(const Permission& value) { SetAccessPolicyPermission(value); return *this;}

    /**
     * <p>The access policy permission. Note that a project <code>ADMINISTRATOR</code>
     * is also known as a project owner.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyPermission(Permission&& value) { SetAccessPolicyPermission(std::move(value)); return *this;}


    /**
     * <p>The date the access policy was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAccessPolicyCreationDate() const{ return m_accessPolicyCreationDate; }

    /**
     * <p>The date the access policy was created, in Unix epoch time.</p>
     */
    inline void SetAccessPolicyCreationDate(const Aws::Utils::DateTime& value) { m_accessPolicyCreationDate = value; }

    /**
     * <p>The date the access policy was created, in Unix epoch time.</p>
     */
    inline void SetAccessPolicyCreationDate(Aws::Utils::DateTime&& value) { m_accessPolicyCreationDate = std::move(value); }

    /**
     * <p>The date the access policy was created, in Unix epoch time.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyCreationDate(const Aws::Utils::DateTime& value) { SetAccessPolicyCreationDate(value); return *this;}

    /**
     * <p>The date the access policy was created, in Unix epoch time.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyCreationDate(Aws::Utils::DateTime&& value) { SetAccessPolicyCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the access policy was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAccessPolicyLastUpdateDate() const{ return m_accessPolicyLastUpdateDate; }

    /**
     * <p>The date the access policy was last updated, in Unix epoch time.</p>
     */
    inline void SetAccessPolicyLastUpdateDate(const Aws::Utils::DateTime& value) { m_accessPolicyLastUpdateDate = value; }

    /**
     * <p>The date the access policy was last updated, in Unix epoch time.</p>
     */
    inline void SetAccessPolicyLastUpdateDate(Aws::Utils::DateTime&& value) { m_accessPolicyLastUpdateDate = std::move(value); }

    /**
     * <p>The date the access policy was last updated, in Unix epoch time.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyLastUpdateDate(const Aws::Utils::DateTime& value) { SetAccessPolicyLastUpdateDate(value); return *this;}

    /**
     * <p>The date the access policy was last updated, in Unix epoch time.</p>
     */
    inline DescribeAccessPolicyResult& WithAccessPolicyLastUpdateDate(Aws::Utils::DateTime&& value) { SetAccessPolicyLastUpdateDate(std::move(value)); return *this;}

  private:

    Aws::String m_accessPolicyId;

    Aws::String m_accessPolicyArn;

    Identity m_accessPolicyIdentity;

    Resource m_accessPolicyResource;

    Permission m_accessPolicyPermission;

    Aws::Utils::DateTime m_accessPolicyCreationDate;

    Aws::Utils::DateTime m_accessPolicyLastUpdateDate;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
