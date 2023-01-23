/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class StartFailbackLaunchRequest : public DrsRequest
  {
  public:
    AWS_DRS_API StartFailbackLaunchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartFailbackLaunch"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>The IDs of the Recovery Instance whose failback launch we want to
     * request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecoveryInstanceIDs() const{ return m_recoveryInstanceIDs; }

    /**
     * <p>The IDs of the Recovery Instance whose failback launch we want to
     * request.</p>
     */
    inline bool RecoveryInstanceIDsHasBeenSet() const { return m_recoveryInstanceIDsHasBeenSet; }

    /**
     * <p>The IDs of the Recovery Instance whose failback launch we want to
     * request.</p>
     */
    inline void SetRecoveryInstanceIDs(const Aws::Vector<Aws::String>& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs = value; }

    /**
     * <p>The IDs of the Recovery Instance whose failback launch we want to
     * request.</p>
     */
    inline void SetRecoveryInstanceIDs(Aws::Vector<Aws::String>&& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs = std::move(value); }

    /**
     * <p>The IDs of the Recovery Instance whose failback launch we want to
     * request.</p>
     */
    inline StartFailbackLaunchRequest& WithRecoveryInstanceIDs(const Aws::Vector<Aws::String>& value) { SetRecoveryInstanceIDs(value); return *this;}

    /**
     * <p>The IDs of the Recovery Instance whose failback launch we want to
     * request.</p>
     */
    inline StartFailbackLaunchRequest& WithRecoveryInstanceIDs(Aws::Vector<Aws::String>&& value) { SetRecoveryInstanceIDs(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Recovery Instance whose failback launch we want to
     * request.</p>
     */
    inline StartFailbackLaunchRequest& AddRecoveryInstanceIDs(const Aws::String& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs.push_back(value); return *this; }

    /**
     * <p>The IDs of the Recovery Instance whose failback launch we want to
     * request.</p>
     */
    inline StartFailbackLaunchRequest& AddRecoveryInstanceIDs(Aws::String&& value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Recovery Instance whose failback launch we want to
     * request.</p>
     */
    inline StartFailbackLaunchRequest& AddRecoveryInstanceIDs(const char* value) { m_recoveryInstanceIDsHasBeenSet = true; m_recoveryInstanceIDs.push_back(value); return *this; }


    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline StartFailbackLaunchRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline StartFailbackLaunchRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline StartFailbackLaunchRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline StartFailbackLaunchRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline StartFailbackLaunchRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline StartFailbackLaunchRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline StartFailbackLaunchRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline StartFailbackLaunchRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be associated with the failback launch Job.</p>
     */
    inline StartFailbackLaunchRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_recoveryInstanceIDs;
    bool m_recoveryInstanceIDsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
