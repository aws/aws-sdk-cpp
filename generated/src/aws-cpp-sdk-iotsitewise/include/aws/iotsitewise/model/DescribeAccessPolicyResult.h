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
    AWS_IOTSITEWISE_API DescribeAccessPolicyResult() = default;
    AWS_IOTSITEWISE_API DescribeAccessPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeAccessPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the access policy.</p>
     */
    inline const Aws::String& GetAccessPolicyId() const { return m_accessPolicyId; }
    template<typename AccessPolicyIdT = Aws::String>
    void SetAccessPolicyId(AccessPolicyIdT&& value) { m_accessPolicyIdHasBeenSet = true; m_accessPolicyId = std::forward<AccessPolicyIdT>(value); }
    template<typename AccessPolicyIdT = Aws::String>
    DescribeAccessPolicyResult& WithAccessPolicyId(AccessPolicyIdT&& value) { SetAccessPolicyId(std::forward<AccessPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the access policy, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:access-policy/${AccessPolicyId}</code>
     * </p>
     */
    inline const Aws::String& GetAccessPolicyArn() const { return m_accessPolicyArn; }
    template<typename AccessPolicyArnT = Aws::String>
    void SetAccessPolicyArn(AccessPolicyArnT&& value) { m_accessPolicyArnHasBeenSet = true; m_accessPolicyArn = std::forward<AccessPolicyArnT>(value); }
    template<typename AccessPolicyArnT = Aws::String>
    DescribeAccessPolicyResult& WithAccessPolicyArn(AccessPolicyArnT&& value) { SetAccessPolicyArn(std::forward<AccessPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity (IAM Identity Center user, IAM Identity Center group, or IAM
     * user) to which this access policy applies.</p>
     */
    inline const Identity& GetAccessPolicyIdentity() const { return m_accessPolicyIdentity; }
    template<typename AccessPolicyIdentityT = Identity>
    void SetAccessPolicyIdentity(AccessPolicyIdentityT&& value) { m_accessPolicyIdentityHasBeenSet = true; m_accessPolicyIdentity = std::forward<AccessPolicyIdentityT>(value); }
    template<typename AccessPolicyIdentityT = Identity>
    DescribeAccessPolicyResult& WithAccessPolicyIdentity(AccessPolicyIdentityT&& value) { SetAccessPolicyIdentity(std::forward<AccessPolicyIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IoT SiteWise Monitor resource (portal or project) to which this access
     * policy provides access.</p>
     */
    inline const Resource& GetAccessPolicyResource() const { return m_accessPolicyResource; }
    template<typename AccessPolicyResourceT = Resource>
    void SetAccessPolicyResource(AccessPolicyResourceT&& value) { m_accessPolicyResourceHasBeenSet = true; m_accessPolicyResource = std::forward<AccessPolicyResourceT>(value); }
    template<typename AccessPolicyResourceT = Resource>
    DescribeAccessPolicyResult& WithAccessPolicyResource(AccessPolicyResourceT&& value) { SetAccessPolicyResource(std::forward<AccessPolicyResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access policy permission. Note that a project <code>ADMINISTRATOR</code>
     * is also known as a project owner.</p>
     */
    inline Permission GetAccessPolicyPermission() const { return m_accessPolicyPermission; }
    inline void SetAccessPolicyPermission(Permission value) { m_accessPolicyPermissionHasBeenSet = true; m_accessPolicyPermission = value; }
    inline DescribeAccessPolicyResult& WithAccessPolicyPermission(Permission value) { SetAccessPolicyPermission(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the access policy was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAccessPolicyCreationDate() const { return m_accessPolicyCreationDate; }
    template<typename AccessPolicyCreationDateT = Aws::Utils::DateTime>
    void SetAccessPolicyCreationDate(AccessPolicyCreationDateT&& value) { m_accessPolicyCreationDateHasBeenSet = true; m_accessPolicyCreationDate = std::forward<AccessPolicyCreationDateT>(value); }
    template<typename AccessPolicyCreationDateT = Aws::Utils::DateTime>
    DescribeAccessPolicyResult& WithAccessPolicyCreationDate(AccessPolicyCreationDateT&& value) { SetAccessPolicyCreationDate(std::forward<AccessPolicyCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the access policy was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetAccessPolicyLastUpdateDate() const { return m_accessPolicyLastUpdateDate; }
    template<typename AccessPolicyLastUpdateDateT = Aws::Utils::DateTime>
    void SetAccessPolicyLastUpdateDate(AccessPolicyLastUpdateDateT&& value) { m_accessPolicyLastUpdateDateHasBeenSet = true; m_accessPolicyLastUpdateDate = std::forward<AccessPolicyLastUpdateDateT>(value); }
    template<typename AccessPolicyLastUpdateDateT = Aws::Utils::DateTime>
    DescribeAccessPolicyResult& WithAccessPolicyLastUpdateDate(AccessPolicyLastUpdateDateT&& value) { SetAccessPolicyLastUpdateDate(std::forward<AccessPolicyLastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccessPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessPolicyId;
    bool m_accessPolicyIdHasBeenSet = false;

    Aws::String m_accessPolicyArn;
    bool m_accessPolicyArnHasBeenSet = false;

    Identity m_accessPolicyIdentity;
    bool m_accessPolicyIdentityHasBeenSet = false;

    Resource m_accessPolicyResource;
    bool m_accessPolicyResourceHasBeenSet = false;

    Permission m_accessPolicyPermission{Permission::NOT_SET};
    bool m_accessPolicyPermissionHasBeenSet = false;

    Aws::Utils::DateTime m_accessPolicyCreationDate{};
    bool m_accessPolicyCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_accessPolicyLastUpdateDate{};
    bool m_accessPolicyLastUpdateDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
