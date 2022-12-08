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
    AWS_DRS_API StartRecoveryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRecovery"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>Whether this Source Server Recovery operation is a drill or not.</p>
     */
    inline bool GetIsDrill() const{ return m_isDrill; }

    /**
     * <p>Whether this Source Server Recovery operation is a drill or not.</p>
     */
    inline bool IsDrillHasBeenSet() const { return m_isDrillHasBeenSet; }

    /**
     * <p>Whether this Source Server Recovery operation is a drill or not.</p>
     */
    inline void SetIsDrill(bool value) { m_isDrillHasBeenSet = true; m_isDrill = value; }

    /**
     * <p>Whether this Source Server Recovery operation is a drill or not.</p>
     */
    inline StartRecoveryRequest& WithIsDrill(bool value) { SetIsDrill(value); return *this;}


    /**
     * <p>The Source Servers that we want to start a Recovery Job for.</p>
     */
    inline const Aws::Vector<StartRecoveryRequestSourceServer>& GetSourceServers() const{ return m_sourceServers; }

    /**
     * <p>The Source Servers that we want to start a Recovery Job for.</p>
     */
    inline bool SourceServersHasBeenSet() const { return m_sourceServersHasBeenSet; }

    /**
     * <p>The Source Servers that we want to start a Recovery Job for.</p>
     */
    inline void SetSourceServers(const Aws::Vector<StartRecoveryRequestSourceServer>& value) { m_sourceServersHasBeenSet = true; m_sourceServers = value; }

    /**
     * <p>The Source Servers that we want to start a Recovery Job for.</p>
     */
    inline void SetSourceServers(Aws::Vector<StartRecoveryRequestSourceServer>&& value) { m_sourceServersHasBeenSet = true; m_sourceServers = std::move(value); }

    /**
     * <p>The Source Servers that we want to start a Recovery Job for.</p>
     */
    inline StartRecoveryRequest& WithSourceServers(const Aws::Vector<StartRecoveryRequestSourceServer>& value) { SetSourceServers(value); return *this;}

    /**
     * <p>The Source Servers that we want to start a Recovery Job for.</p>
     */
    inline StartRecoveryRequest& WithSourceServers(Aws::Vector<StartRecoveryRequestSourceServer>&& value) { SetSourceServers(std::move(value)); return *this;}

    /**
     * <p>The Source Servers that we want to start a Recovery Job for.</p>
     */
    inline StartRecoveryRequest& AddSourceServers(const StartRecoveryRequestSourceServer& value) { m_sourceServersHasBeenSet = true; m_sourceServers.push_back(value); return *this; }

    /**
     * <p>The Source Servers that we want to start a Recovery Job for.</p>
     */
    inline StartRecoveryRequest& AddSourceServers(StartRecoveryRequestSourceServer&& value) { m_sourceServersHasBeenSet = true; m_sourceServers.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline StartRecoveryRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline StartRecoveryRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline StartRecoveryRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline StartRecoveryRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline StartRecoveryRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline StartRecoveryRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline StartRecoveryRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline StartRecoveryRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be associated with the Recovery Job.</p>
     */
    inline StartRecoveryRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    bool m_isDrill;
    bool m_isDrillHasBeenSet = false;

    Aws::Vector<StartRecoveryRequestSourceServer> m_sourceServers;
    bool m_sourceServersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
