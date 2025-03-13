/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/drs/model/StartRecoveryRequestSourceServer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class StartRecoveryRequest : public DrsRequest
  {
  public:
    AWS_DRS_API StartRecoveryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRecovery"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Whether this Source Server Recovery operation is a drill or not.</p>
     */
    inline bool GetIsDrill() const { return m_isDrill; }
    inline bool IsDrillHasBeenSet() const { return m_isDrillHasBeenSet; }
    inline void SetIsDrill(bool value) { m_isDrillHasBeenSet = true; m_isDrill = value; }
    inline StartRecoveryRequest& WithIsDrill(bool value) { SetIsDrill(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Source Servers that we want to start a Recovery Job for.</p>
     */
    inline const Aws::Vector<StartRecoveryRequestSourceServer>& GetSourceServers() const { return m_sourceServers; }
    inline bool SourceServersHasBeenSet() const { return m_sourceServersHasBeenSet; }
    template<typename SourceServersT = Aws::Vector<StartRecoveryRequestSourceServer>>
    void SetSourceServers(SourceServersT&& value) { m_sourceServersHasBeenSet = true; m_sourceServers = std::forward<SourceServersT>(value); }
    template<typename SourceServersT = Aws::Vector<StartRecoveryRequestSourceServer>>
    StartRecoveryRequest& WithSourceServers(SourceServersT&& value) { SetSourceServers(std::forward<SourceServersT>(value)); return *this;}
    template<typename SourceServersT = StartRecoveryRequestSourceServer>
    StartRecoveryRequest& AddSourceServers(SourceServersT&& value) { m_sourceServersHasBeenSet = true; m_sourceServers.emplace_back(std::forward<SourceServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartRecoveryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartRecoveryRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    bool m_isDrill{false};
    bool m_isDrillHasBeenSet = false;

    Aws::Vector<StartRecoveryRequestSourceServer> m_sourceServers;
    bool m_sourceServersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
