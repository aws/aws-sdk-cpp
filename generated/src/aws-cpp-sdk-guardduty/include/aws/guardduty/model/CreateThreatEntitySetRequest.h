/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/ThreatEntitySetFormat.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class CreateThreatEntitySetRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API CreateThreatEntitySetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateThreatEntitySet"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * create a threat entity set.</p> <p>To find the <code>detectorId</code> in the
     * current Region, see the Settings page in the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    CreateThreatEntitySetRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name to identify the threat entity set.</p> <p>The name of
     * your list can include lowercase letters, uppercase letters, numbers, dash (-),
     * and underscore (_).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateThreatEntitySetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the file that contains the threat entity set.</p>
     */
    inline ThreatEntitySetFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(ThreatEntitySetFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline CreateThreatEntitySetRequest& WithFormat(ThreatEntitySetFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the file that contains the threat entity set.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CreateThreatEntitySetRequest& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the Amazon S3 bucket specified
     * in the <b>location</b> parameter.</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
    template<typename ExpectedBucketOwnerT = Aws::String>
    void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value); }
    template<typename ExpectedBucketOwnerT = Aws::String>
    CreateThreatEntitySetRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that indicates whether GuardDuty should start using the
     * uploaded threat entity set to generate findings.</p>
     */
    inline bool GetActivate() const { return m_activate; }
    inline bool ActivateHasBeenSet() const { return m_activateHasBeenSet; }
    inline void SetActivate(bool value) { m_activateHasBeenSet = true; m_activate = value; }
    inline CreateThreatEntitySetRequest& WithActivate(bool value) { SetActivate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idempotency token for the create request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateThreatEntitySetRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be added to a new threat entity set resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateThreatEntitySetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateThreatEntitySetRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ThreatEntitySetFormat m_format{ThreatEntitySetFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    bool m_activate{false};
    bool m_activateHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
