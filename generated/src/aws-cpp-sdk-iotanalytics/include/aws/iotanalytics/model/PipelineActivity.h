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
    AWS_IOTANALYTICS_API PipelineActivity();
    AWS_IOTANALYTICS_API PipelineActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API PipelineActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the source of the messages to be processed.</p>
     */
    inline const ChannelActivity& GetChannel() const{ return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(const ChannelActivity& value) { m_channelHasBeenSet = true; m_channel = value; }
    inline void SetChannel(ChannelActivity&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }
    inline PipelineActivity& WithChannel(const ChannelActivity& value) { SetChannel(value); return *this;}
    inline PipelineActivity& WithChannel(ChannelActivity&& value) { SetChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runs a Lambda function to modify the message.</p>
     */
    inline const LambdaActivity& GetLambda() const{ return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    inline void SetLambda(const LambdaActivity& value) { m_lambdaHasBeenSet = true; m_lambda = value; }
    inline void SetLambda(LambdaActivity&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }
    inline PipelineActivity& WithLambda(const LambdaActivity& value) { SetLambda(value); return *this;}
    inline PipelineActivity& WithLambda(LambdaActivity&& value) { SetLambda(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies where to store the processed message data.</p>
     */
    inline const DatastoreActivity& GetDatastore() const{ return m_datastore; }
    inline bool DatastoreHasBeenSet() const { return m_datastoreHasBeenSet; }
    inline void SetDatastore(const DatastoreActivity& value) { m_datastoreHasBeenSet = true; m_datastore = value; }
    inline void SetDatastore(DatastoreActivity&& value) { m_datastoreHasBeenSet = true; m_datastore = std::move(value); }
    inline PipelineActivity& WithDatastore(const DatastoreActivity& value) { SetDatastore(value); return *this;}
    inline PipelineActivity& WithDatastore(DatastoreActivity&& value) { SetDatastore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds other attributes based on existing attributes in the message.</p>
     */
    inline const AddAttributesActivity& GetAddAttributes() const{ return m_addAttributes; }
    inline bool AddAttributesHasBeenSet() const { return m_addAttributesHasBeenSet; }
    inline void SetAddAttributes(const AddAttributesActivity& value) { m_addAttributesHasBeenSet = true; m_addAttributes = value; }
    inline void SetAddAttributes(AddAttributesActivity&& value) { m_addAttributesHasBeenSet = true; m_addAttributes = std::move(value); }
    inline PipelineActivity& WithAddAttributes(const AddAttributesActivity& value) { SetAddAttributes(value); return *this;}
    inline PipelineActivity& WithAddAttributes(AddAttributesActivity&& value) { SetAddAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Removes attributes from a message.</p>
     */
    inline const RemoveAttributesActivity& GetRemoveAttributes() const{ return m_removeAttributes; }
    inline bool RemoveAttributesHasBeenSet() const { return m_removeAttributesHasBeenSet; }
    inline void SetRemoveAttributes(const RemoveAttributesActivity& value) { m_removeAttributesHasBeenSet = true; m_removeAttributes = value; }
    inline void SetRemoveAttributes(RemoveAttributesActivity&& value) { m_removeAttributesHasBeenSet = true; m_removeAttributes = std::move(value); }
    inline PipelineActivity& WithRemoveAttributes(const RemoveAttributesActivity& value) { SetRemoveAttributes(value); return *this;}
    inline PipelineActivity& WithRemoveAttributes(RemoveAttributesActivity&& value) { SetRemoveAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to create a new message using only the specified attributes from the
     * original message. </p>
     */
    inline const SelectAttributesActivity& GetSelectAttributes() const{ return m_selectAttributes; }
    inline bool SelectAttributesHasBeenSet() const { return m_selectAttributesHasBeenSet; }
    inline void SetSelectAttributes(const SelectAttributesActivity& value) { m_selectAttributesHasBeenSet = true; m_selectAttributes = value; }
    inline void SetSelectAttributes(SelectAttributesActivity&& value) { m_selectAttributesHasBeenSet = true; m_selectAttributes = std::move(value); }
    inline PipelineActivity& WithSelectAttributes(const SelectAttributesActivity& value) { SetSelectAttributes(value); return *this;}
    inline PipelineActivity& WithSelectAttributes(SelectAttributesActivity&& value) { SetSelectAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters a message based on its attributes.</p>
     */
    inline const FilterActivity& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const FilterActivity& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(FilterActivity&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline PipelineActivity& WithFilter(const FilterActivity& value) { SetFilter(value); return *this;}
    inline PipelineActivity& WithFilter(FilterActivity&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Computes an arithmetic expression using the message's attributes and adds it
     * to the message.</p>
     */
    inline const MathActivity& GetMath() const{ return m_math; }
    inline bool MathHasBeenSet() const { return m_mathHasBeenSet; }
    inline void SetMath(const MathActivity& value) { m_mathHasBeenSet = true; m_math = value; }
    inline void SetMath(MathActivity&& value) { m_mathHasBeenSet = true; m_math = std::move(value); }
    inline PipelineActivity& WithMath(const MathActivity& value) { SetMath(value); return *this;}
    inline PipelineActivity& WithMath(MathActivity&& value) { SetMath(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds data from the IoT device registry to your message.</p>
     */
    inline const DeviceRegistryEnrichActivity& GetDeviceRegistryEnrich() const{ return m_deviceRegistryEnrich; }
    inline bool DeviceRegistryEnrichHasBeenSet() const { return m_deviceRegistryEnrichHasBeenSet; }
    inline void SetDeviceRegistryEnrich(const DeviceRegistryEnrichActivity& value) { m_deviceRegistryEnrichHasBeenSet = true; m_deviceRegistryEnrich = value; }
    inline void SetDeviceRegistryEnrich(DeviceRegistryEnrichActivity&& value) { m_deviceRegistryEnrichHasBeenSet = true; m_deviceRegistryEnrich = std::move(value); }
    inline PipelineActivity& WithDeviceRegistryEnrich(const DeviceRegistryEnrichActivity& value) { SetDeviceRegistryEnrich(value); return *this;}
    inline PipelineActivity& WithDeviceRegistryEnrich(DeviceRegistryEnrichActivity&& value) { SetDeviceRegistryEnrich(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds information from the IoT Device Shadow service to a message.</p>
     */
    inline const DeviceShadowEnrichActivity& GetDeviceShadowEnrich() const{ return m_deviceShadowEnrich; }
    inline bool DeviceShadowEnrichHasBeenSet() const { return m_deviceShadowEnrichHasBeenSet; }
    inline void SetDeviceShadowEnrich(const DeviceShadowEnrichActivity& value) { m_deviceShadowEnrichHasBeenSet = true; m_deviceShadowEnrich = value; }
    inline void SetDeviceShadowEnrich(DeviceShadowEnrichActivity&& value) { m_deviceShadowEnrichHasBeenSet = true; m_deviceShadowEnrich = std::move(value); }
    inline PipelineActivity& WithDeviceShadowEnrich(const DeviceShadowEnrichActivity& value) { SetDeviceShadowEnrich(value); return *this;}
    inline PipelineActivity& WithDeviceShadowEnrich(DeviceShadowEnrichActivity&& value) { SetDeviceShadowEnrich(std::move(value)); return *this;}
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
