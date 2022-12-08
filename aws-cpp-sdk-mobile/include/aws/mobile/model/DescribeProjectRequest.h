/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/mobile/MobileRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Mobile
{
namespace Model
{

  /**
   * <p> Request structure used to request details about a project. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeProjectRequest">AWS
   * API Reference</a></p>
   */
  class DescribeProjectRequest : public MobileRequest
  {
  public:
    AWS_MOBILE_API DescribeProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProject"; }

    AWS_MOBILE_API Aws::String SerializePayload() const override;

    AWS_MOBILE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Unique project identifier. </p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p> Unique project identifier. </p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p> Unique project identifier. </p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p> Unique project identifier. </p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p> Unique project identifier. </p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p> Unique project identifier. </p>
     */
    inline DescribeProjectRequest& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p> Unique project identifier. </p>
     */
    inline DescribeProjectRequest& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p> Unique project identifier. </p>
     */
    inline DescribeProjectRequest& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p> If set to true, causes AWS Mobile Hub to synchronize information from other
     * services, e.g., update state of AWS CloudFormation stacks in the AWS Mobile Hub
     * project. </p>
     */
    inline bool GetSyncFromResources() const{ return m_syncFromResources; }

    /**
     * <p> If set to true, causes AWS Mobile Hub to synchronize information from other
     * services, e.g., update state of AWS CloudFormation stacks in the AWS Mobile Hub
     * project. </p>
     */
    inline bool SyncFromResourcesHasBeenSet() const { return m_syncFromResourcesHasBeenSet; }

    /**
     * <p> If set to true, causes AWS Mobile Hub to synchronize information from other
     * services, e.g., update state of AWS CloudFormation stacks in the AWS Mobile Hub
     * project. </p>
     */
    inline void SetSyncFromResources(bool value) { m_syncFromResourcesHasBeenSet = true; m_syncFromResources = value; }

    /**
     * <p> If set to true, causes AWS Mobile Hub to synchronize information from other
     * services, e.g., update state of AWS CloudFormation stacks in the AWS Mobile Hub
     * project. </p>
     */
    inline DescribeProjectRequest& WithSyncFromResources(bool value) { SetSyncFromResources(value); return *this;}

  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    bool m_syncFromResources;
    bool m_syncFromResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
