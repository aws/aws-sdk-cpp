/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/StreamProcessorSettingsForUpdate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/StreamProcessorDataSharingPreference.h>
#include <aws/rekognition/model/RegionOfInterest.h>
#include <aws/rekognition/model/StreamProcessorParameterToDelete.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class UpdateStreamProcessorRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API UpdateStreamProcessorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStreamProcessor"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> Name of the stream processor that you want to update. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name of the stream processor that you want to update. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name of the stream processor that you want to update. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name of the stream processor that you want to update. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name of the stream processor that you want to update. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name of the stream processor that you want to update. </p>
     */
    inline UpdateStreamProcessorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name of the stream processor that you want to update. </p>
     */
    inline UpdateStreamProcessorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name of the stream processor that you want to update. </p>
     */
    inline UpdateStreamProcessorRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The stream processor settings that you want to update. Label detection
     * settings can be updated to detect different labels with a different minimum
     * confidence. </p>
     */
    inline const StreamProcessorSettingsForUpdate& GetSettingsForUpdate() const{ return m_settingsForUpdate; }

    /**
     * <p> The stream processor settings that you want to update. Label detection
     * settings can be updated to detect different labels with a different minimum
     * confidence. </p>
     */
    inline bool SettingsForUpdateHasBeenSet() const { return m_settingsForUpdateHasBeenSet; }

    /**
     * <p> The stream processor settings that you want to update. Label detection
     * settings can be updated to detect different labels with a different minimum
     * confidence. </p>
     */
    inline void SetSettingsForUpdate(const StreamProcessorSettingsForUpdate& value) { m_settingsForUpdateHasBeenSet = true; m_settingsForUpdate = value; }

    /**
     * <p> The stream processor settings that you want to update. Label detection
     * settings can be updated to detect different labels with a different minimum
     * confidence. </p>
     */
    inline void SetSettingsForUpdate(StreamProcessorSettingsForUpdate&& value) { m_settingsForUpdateHasBeenSet = true; m_settingsForUpdate = std::move(value); }

    /**
     * <p> The stream processor settings that you want to update. Label detection
     * settings can be updated to detect different labels with a different minimum
     * confidence. </p>
     */
    inline UpdateStreamProcessorRequest& WithSettingsForUpdate(const StreamProcessorSettingsForUpdate& value) { SetSettingsForUpdate(value); return *this;}

    /**
     * <p> The stream processor settings that you want to update. Label detection
     * settings can be updated to detect different labels with a different minimum
     * confidence. </p>
     */
    inline UpdateStreamProcessorRequest& WithSettingsForUpdate(StreamProcessorSettingsForUpdate&& value) { SetSettingsForUpdate(std::move(value)); return *this;}


    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline const Aws::Vector<RegionOfInterest>& GetRegionsOfInterestForUpdate() const{ return m_regionsOfInterestForUpdate; }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline bool RegionsOfInterestForUpdateHasBeenSet() const { return m_regionsOfInterestForUpdateHasBeenSet; }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline void SetRegionsOfInterestForUpdate(const Aws::Vector<RegionOfInterest>& value) { m_regionsOfInterestForUpdateHasBeenSet = true; m_regionsOfInterestForUpdate = value; }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline void SetRegionsOfInterestForUpdate(Aws::Vector<RegionOfInterest>&& value) { m_regionsOfInterestForUpdateHasBeenSet = true; m_regionsOfInterestForUpdate = std::move(value); }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline UpdateStreamProcessorRequest& WithRegionsOfInterestForUpdate(const Aws::Vector<RegionOfInterest>& value) { SetRegionsOfInterestForUpdate(value); return *this;}

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline UpdateStreamProcessorRequest& WithRegionsOfInterestForUpdate(Aws::Vector<RegionOfInterest>&& value) { SetRegionsOfInterestForUpdate(std::move(value)); return *this;}

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline UpdateStreamProcessorRequest& AddRegionsOfInterestForUpdate(const RegionOfInterest& value) { m_regionsOfInterestForUpdateHasBeenSet = true; m_regionsOfInterestForUpdate.push_back(value); return *this; }

    /**
     * <p> Specifies locations in the frames where Amazon Rekognition checks for
     * objects or people. This is an optional parameter for label detection stream
     * processors. </p>
     */
    inline UpdateStreamProcessorRequest& AddRegionsOfInterestForUpdate(RegionOfInterest&& value) { m_regionsOfInterestForUpdateHasBeenSet = true; m_regionsOfInterestForUpdate.push_back(std::move(value)); return *this; }


    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline const StreamProcessorDataSharingPreference& GetDataSharingPreferenceForUpdate() const{ return m_dataSharingPreferenceForUpdate; }

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline bool DataSharingPreferenceForUpdateHasBeenSet() const { return m_dataSharingPreferenceForUpdateHasBeenSet; }

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline void SetDataSharingPreferenceForUpdate(const StreamProcessorDataSharingPreference& value) { m_dataSharingPreferenceForUpdateHasBeenSet = true; m_dataSharingPreferenceForUpdate = value; }

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline void SetDataSharingPreferenceForUpdate(StreamProcessorDataSharingPreference&& value) { m_dataSharingPreferenceForUpdateHasBeenSet = true; m_dataSharingPreferenceForUpdate = std::move(value); }

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline UpdateStreamProcessorRequest& WithDataSharingPreferenceForUpdate(const StreamProcessorDataSharingPreference& value) { SetDataSharingPreferenceForUpdate(value); return *this;}

    /**
     * <p> Shows whether you are sharing data with Rekognition to improve model
     * performance. You can choose this option at the account level or on a per-stream
     * basis. Note that if you opt out at the account level this setting is ignored on
     * individual streams. </p>
     */
    inline UpdateStreamProcessorRequest& WithDataSharingPreferenceForUpdate(StreamProcessorDataSharingPreference&& value) { SetDataSharingPreferenceForUpdate(std::move(value)); return *this;}


    /**
     * <p> A list of parameters you want to delete from the stream processor. </p>
     */
    inline const Aws::Vector<StreamProcessorParameterToDelete>& GetParametersToDelete() const{ return m_parametersToDelete; }

    /**
     * <p> A list of parameters you want to delete from the stream processor. </p>
     */
    inline bool ParametersToDeleteHasBeenSet() const { return m_parametersToDeleteHasBeenSet; }

    /**
     * <p> A list of parameters you want to delete from the stream processor. </p>
     */
    inline void SetParametersToDelete(const Aws::Vector<StreamProcessorParameterToDelete>& value) { m_parametersToDeleteHasBeenSet = true; m_parametersToDelete = value; }

    /**
     * <p> A list of parameters you want to delete from the stream processor. </p>
     */
    inline void SetParametersToDelete(Aws::Vector<StreamProcessorParameterToDelete>&& value) { m_parametersToDeleteHasBeenSet = true; m_parametersToDelete = std::move(value); }

    /**
     * <p> A list of parameters you want to delete from the stream processor. </p>
     */
    inline UpdateStreamProcessorRequest& WithParametersToDelete(const Aws::Vector<StreamProcessorParameterToDelete>& value) { SetParametersToDelete(value); return *this;}

    /**
     * <p> A list of parameters you want to delete from the stream processor. </p>
     */
    inline UpdateStreamProcessorRequest& WithParametersToDelete(Aws::Vector<StreamProcessorParameterToDelete>&& value) { SetParametersToDelete(std::move(value)); return *this;}

    /**
     * <p> A list of parameters you want to delete from the stream processor. </p>
     */
    inline UpdateStreamProcessorRequest& AddParametersToDelete(const StreamProcessorParameterToDelete& value) { m_parametersToDeleteHasBeenSet = true; m_parametersToDelete.push_back(value); return *this; }

    /**
     * <p> A list of parameters you want to delete from the stream processor. </p>
     */
    inline UpdateStreamProcessorRequest& AddParametersToDelete(StreamProcessorParameterToDelete&& value) { m_parametersToDeleteHasBeenSet = true; m_parametersToDelete.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StreamProcessorSettingsForUpdate m_settingsForUpdate;
    bool m_settingsForUpdateHasBeenSet = false;

    Aws::Vector<RegionOfInterest> m_regionsOfInterestForUpdate;
    bool m_regionsOfInterestForUpdateHasBeenSet = false;

    StreamProcessorDataSharingPreference m_dataSharingPreferenceForUpdate;
    bool m_dataSharingPreferenceForUpdateHasBeenSet = false;

    Aws::Vector<StreamProcessorParameterToDelete> m_parametersToDelete;
    bool m_parametersToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
