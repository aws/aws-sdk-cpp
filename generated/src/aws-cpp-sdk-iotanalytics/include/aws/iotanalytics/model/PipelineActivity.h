/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/ChannelActivity.h>
#include <aws/iotanalytics/model/LambdaActivity.h>
#include <aws/iotanalytics/model/DatastoreActivity.h>
#include <aws/iotanalytics/model/AddAttributesActivity.h>
#include <aws/iotanalytics/model/RemoveAttributesActivity.h>
#include <aws/iotanalytics/model/SelectAttributesActivity.h>
#include <aws/iotanalytics/model/FilterActivity.h>
#include <aws/iotanalytics/model/MathActivity.h>
#include <aws/iotanalytics/model/DeviceRegistryEnrichActivity.h>
#include <aws/iotanalytics/model/DeviceShadowEnrichActivity.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>An activity that performs a transformation on a message.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/PipelineActivity">AWS
   * API Reference</a></p>
   */
  class PipelineActivity
  {
  public:
    AWS_IOTANALYTICS_API PipelineActivity() = default;
    AWS_IOTANALYTICS_API PipelineActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API PipelineActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the source of the messages to be processed.</p>
     */
    inline const ChannelActivity& GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    template<typename ChannelT = ChannelActivity>
    void SetChannel(ChannelT&& value) { m_channelHasBeenSet = true; m_channel = std::forward<ChannelT>(value); }
    template<typename ChannelT = ChannelActivity>
    PipelineActivity& WithChannel(ChannelT&& value) { SetChannel(std::forward<ChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runs a Lambda function to modify the message.</p>
     */
    inline const LambdaActivity& GetLambda() const { return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    template<typename LambdaT = LambdaActivity>
    void SetLambda(LambdaT&& value) { m_lambdaHasBeenSet = true; m_lambda = std::forward<LambdaT>(value); }
    template<typename LambdaT = LambdaActivity>
    PipelineActivity& WithLambda(LambdaT&& value) { SetLambda(std::forward<LambdaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies where to store the processed message data.</p>
     */
    inline const DatastoreActivity& GetDatastore() const { return m_datastore; }
    inline bool DatastoreHasBeenSet() const { return m_datastoreHasBeenSet; }
    template<typename DatastoreT = DatastoreActivity>
    void SetDatastore(DatastoreT&& value) { m_datastoreHasBeenSet = true; m_datastore = std::forward<DatastoreT>(value); }
    template<typename DatastoreT = DatastoreActivity>
    PipelineActivity& WithDatastore(DatastoreT&& value) { SetDatastore(std::forward<DatastoreT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds other attributes based on existing attributes in the message.</p>
     */
    inline const AddAttributesActivity& GetAddAttributes() const { return m_addAttributes; }
    inline bool AddAttributesHasBeenSet() const { return m_addAttributesHasBeenSet; }
    template<typename AddAttributesT = AddAttributesActivity>
    void SetAddAttributes(AddAttributesT&& value) { m_addAttributesHasBeenSet = true; m_addAttributes = std::forward<AddAttributesT>(value); }
    template<typename AddAttributesT = AddAttributesActivity>
    PipelineActivity& WithAddAttributes(AddAttributesT&& value) { SetAddAttributes(std::forward<AddAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Removes attributes from a message.</p>
     */
    inline const RemoveAttributesActivity& GetRemoveAttributes() const { return m_removeAttributes; }
    inline bool RemoveAttributesHasBeenSet() const { return m_removeAttributesHasBeenSet; }
    template<typename RemoveAttributesT = RemoveAttributesActivity>
    void SetRemoveAttributes(RemoveAttributesT&& value) { m_removeAttributesHasBeenSet = true; m_removeAttributes = std::forward<RemoveAttributesT>(value); }
    template<typename RemoveAttributesT = RemoveAttributesActivity>
    PipelineActivity& WithRemoveAttributes(RemoveAttributesT&& value) { SetRemoveAttributes(std::forward<RemoveAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to create a new message using only the specified attributes from the
     * original message. </p>
     */
    inline const SelectAttributesActivity& GetSelectAttributes() const { return m_selectAttributes; }
    inline bool SelectAttributesHasBeenSet() const { return m_selectAttributesHasBeenSet; }
    template<typename SelectAttributesT = SelectAttributesActivity>
    void SetSelectAttributes(SelectAttributesT&& value) { m_selectAttributesHasBeenSet = true; m_selectAttributes = std::forward<SelectAttributesT>(value); }
    template<typename SelectAttributesT = SelectAttributesActivity>
    PipelineActivity& WithSelectAttributes(SelectAttributesT&& value) { SetSelectAttributes(std::forward<SelectAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters a message based on its attributes.</p>
     */
    inline const FilterActivity& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = FilterActivity>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = FilterActivity>
    PipelineActivity& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Computes an arithmetic expression using the message's attributes and adds it
     * to the message.</p>
     */
    inline const MathActivity& GetMath() const { return m_math; }
    inline bool MathHasBeenSet() const { return m_mathHasBeenSet; }
    template<typename MathT = MathActivity>
    void SetMath(MathT&& value) { m_mathHasBeenSet = true; m_math = std::forward<MathT>(value); }
    template<typename MathT = MathActivity>
    PipelineActivity& WithMath(MathT&& value) { SetMath(std::forward<MathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds data from the IoT device registry to your message.</p>
     */
    inline const DeviceRegistryEnrichActivity& GetDeviceRegistryEnrich() const { return m_deviceRegistryEnrich; }
    inline bool DeviceRegistryEnrichHasBeenSet() const { return m_deviceRegistryEnrichHasBeenSet; }
    template<typename DeviceRegistryEnrichT = DeviceRegistryEnrichActivity>
    void SetDeviceRegistryEnrich(DeviceRegistryEnrichT&& value) { m_deviceRegistryEnrichHasBeenSet = true; m_deviceRegistryEnrich = std::forward<DeviceRegistryEnrichT>(value); }
    template<typename DeviceRegistryEnrichT = DeviceRegistryEnrichActivity>
    PipelineActivity& WithDeviceRegistryEnrich(DeviceRegistryEnrichT&& value) { SetDeviceRegistryEnrich(std::forward<DeviceRegistryEnrichT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds information from the IoT Device Shadow service to a message.</p>
     */
    inline const DeviceShadowEnrichActivity& GetDeviceShadowEnrich() const { return m_deviceShadowEnrich; }
    inline bool DeviceShadowEnrichHasBeenSet() const { return m_deviceShadowEnrichHasBeenSet; }
    template<typename DeviceShadowEnrichT = DeviceShadowEnrichActivity>
    void SetDeviceShadowEnrich(DeviceShadowEnrichT&& value) { m_deviceShadowEnrichHasBeenSet = true; m_deviceShadowEnrich = std::forward<DeviceShadowEnrichT>(value); }
    template<typename DeviceShadowEnrichT = DeviceShadowEnrichActivity>
    PipelineActivity& WithDeviceShadowEnrich(DeviceShadowEnrichT&& value) { SetDeviceShadowEnrich(std::forward<DeviceShadowEnrichT>(value)); return *this;}
    ///@}
  private:

    ChannelActivity m_channel;
    bool m_channelHasBeenSet = false;

    LambdaActivity m_lambda;
    bool m_lambdaHasBeenSet = false;

    DatastoreActivity m_datastore;
    bool m_datastoreHasBeenSet = false;

    AddAttributesActivity m_addAttributes;
    bool m_addAttributesHasBeenSet = false;

    RemoveAttributesActivity m_removeAttributes;
    bool m_removeAttributesHasBeenSet = false;

    SelectAttributesActivity m_selectAttributes;
    bool m_selectAttributesHasBeenSet = false;

    FilterActivity m_filter;
    bool m_filterHasBeenSet = false;

    MathActivity m_math;
    bool m_mathHasBeenSet = false;

    DeviceRegistryEnrichActivity m_deviceRegistryEnrich;
    bool m_deviceRegistryEnrichHasBeenSet = false;

    DeviceShadowEnrichActivity m_deviceShadowEnrich;
    bool m_deviceShadowEnrichHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
