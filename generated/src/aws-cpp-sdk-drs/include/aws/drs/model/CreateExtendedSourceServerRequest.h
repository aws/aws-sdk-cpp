/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class CreateExtendedSourceServerRequest : public DrsRequest
  {
  public:
    AWS_DRS_API CreateExtendedSourceServerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExtendedSourceServer"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>This defines the ARN of the source server in staging Account based on which
     * you want to create an extended source server.</p>
     */
    inline const Aws::String& GetSourceServerArn() const { return m_sourceServerArn; }
    inline bool SourceServerArnHasBeenSet() const { return m_sourceServerArnHasBeenSet; }
    template<typename SourceServerArnT = Aws::String>
    void SetSourceServerArn(SourceServerArnT&& value) { m_sourceServerArnHasBeenSet = true; m_sourceServerArn = std::forward<SourceServerArnT>(value); }
    template<typename SourceServerArnT = Aws::String>
    CreateExtendedSourceServerRequest& WithSourceServerArn(SourceServerArnT&& value) { SetSourceServerArn(std::forward<SourceServerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateExtendedSourceServerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateExtendedSourceServerRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_sourceServerArn;
    bool m_sourceServerArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
