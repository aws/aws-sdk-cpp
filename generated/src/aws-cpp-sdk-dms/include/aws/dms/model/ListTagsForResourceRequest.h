/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ListTagsForResourceMessage">AWS
   * API Reference</a></p>
   */
  class ListTagsForResourceRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ListTagsForResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the DMS
     * resource to list tags for. This returns a list of keys (names of tags) created
     * for the resource and their associated tag values.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    ListTagsForResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of ARNs that identify multiple DMS resources that you want to list tags
     * for. This returns a list of keys (tag names) and their associated tag values. It
     * also returns each tag's associated <code>ResourceArn</code> value, which is the
     * ARN of the resource for which each listed tag is created. </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArnList() const { return m_resourceArnList; }
    inline bool ResourceArnListHasBeenSet() const { return m_resourceArnListHasBeenSet; }
    template<typename ResourceArnListT = Aws::Vector<Aws::String>>
    void SetResourceArnList(ResourceArnListT&& value) { m_resourceArnListHasBeenSet = true; m_resourceArnList = std::forward<ResourceArnListT>(value); }
    template<typename ResourceArnListT = Aws::Vector<Aws::String>>
    ListTagsForResourceRequest& WithResourceArnList(ResourceArnListT&& value) { SetResourceArnList(std::forward<ResourceArnListT>(value)); return *this;}
    template<typename ResourceArnListT = Aws::String>
    ListTagsForResourceRequest& AddResourceArnList(ResourceArnListT&& value) { m_resourceArnListHasBeenSet = true; m_resourceArnList.emplace_back(std::forward<ResourceArnListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceArnList;
    bool m_resourceArnListHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
