/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOTANALYTICS_API PipelineActivity
  {
  public:
    PipelineActivity();
    PipelineActivity(Aws::Utils::Json::JsonView jsonValue);
    PipelineActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the source of the messages to be processed.</p>
     */
    inline const ChannelActivity& GetChannel() const{ return m_channel; }

    /**
     * <p>Determines the source of the messages to be processed.</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>Determines the source of the messages to be processed.</p>
     */
    inline void SetChannel(const ChannelActivity& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>Determines the source of the messages to be processed.</p>
     */
    inline void SetChannel(ChannelActivity&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>Determines the source of the messages to be processed.</p>
     */
    inline PipelineActivity& WithChannel(const ChannelActivity& value) { SetChannel(value); return *this;}

    /**
     * <p>Determines the source of the messages to be processed.</p>
     */
    inline PipelineActivity& WithChannel(ChannelActivity&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * <p>Runs a Lambda function to modify the message.</p>
     */
    inline const LambdaActivity& GetLambda() const{ return m_lambda; }

    /**
     * <p>Runs a Lambda function to modify the message.</p>
     */
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }

    /**
     * <p>Runs a Lambda function to modify the message.</p>
     */
    inline void SetLambda(const LambdaActivity& value) { m_lambdaHasBeenSet = true; m_lambda = value; }

    /**
     * <p>Runs a Lambda function to modify the message.</p>
     */
    inline void SetLambda(LambdaActivity&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }

    /**
     * <p>Runs a Lambda function to modify the message.</p>
     */
    inline PipelineActivity& WithLambda(const LambdaActivity& value) { SetLambda(value); return *this;}

    /**
     * <p>Runs a Lambda function to modify the message.</p>
     */
    inline PipelineActivity& WithLambda(LambdaActivity&& value) { SetLambda(std::move(value)); return *this;}


    /**
     * <p>Specifies where to store the processed message data.</p>
     */
    inline const DatastoreActivity& GetDatastore() const{ return m_datastore; }

    /**
     * <p>Specifies where to store the processed message data.</p>
     */
    inline bool DatastoreHasBeenSet() const { return m_datastoreHasBeenSet; }

    /**
     * <p>Specifies where to store the processed message data.</p>
     */
    inline void SetDatastore(const DatastoreActivity& value) { m_datastoreHasBeenSet = true; m_datastore = value; }

    /**
     * <p>Specifies where to store the processed message data.</p>
     */
    inline void SetDatastore(DatastoreActivity&& value) { m_datastoreHasBeenSet = true; m_datastore = std::move(value); }

    /**
     * <p>Specifies where to store the processed message data.</p>
     */
    inline PipelineActivity& WithDatastore(const DatastoreActivity& value) { SetDatastore(value); return *this;}

    /**
     * <p>Specifies where to store the processed message data.</p>
     */
    inline PipelineActivity& WithDatastore(DatastoreActivity&& value) { SetDatastore(std::move(value)); return *this;}


    /**
     * <p>Adds other attributes based on existing attributes in the message.</p>
     */
    inline const AddAttributesActivity& GetAddAttributes() const{ return m_addAttributes; }

    /**
     * <p>Adds other attributes based on existing attributes in the message.</p>
     */
    inline bool AddAttributesHasBeenSet() const { return m_addAttributesHasBeenSet; }

    /**
     * <p>Adds other attributes based on existing attributes in the message.</p>
     */
    inline void SetAddAttributes(const AddAttributesActivity& value) { m_addAttributesHasBeenSet = true; m_addAttributes = value; }

    /**
     * <p>Adds other attributes based on existing attributes in the message.</p>
     */
    inline void SetAddAttributes(AddAttributesActivity&& value) { m_addAttributesHasBeenSet = true; m_addAttributes = std::move(value); }

    /**
     * <p>Adds other attributes based on existing attributes in the message.</p>
     */
    inline PipelineActivity& WithAddAttributes(const AddAttributesActivity& value) { SetAddAttributes(value); return *this;}

    /**
     * <p>Adds other attributes based on existing attributes in the message.</p>
     */
    inline PipelineActivity& WithAddAttributes(AddAttributesActivity&& value) { SetAddAttributes(std::move(value)); return *this;}


    /**
     * <p>Removes attributes from a message.</p>
     */
    inline const RemoveAttributesActivity& GetRemoveAttributes() const{ return m_removeAttributes; }

    /**
     * <p>Removes attributes from a message.</p>
     */
    inline bool RemoveAttributesHasBeenSet() const { return m_removeAttributesHasBeenSet; }

    /**
     * <p>Removes attributes from a message.</p>
     */
    inline void SetRemoveAttributes(const RemoveAttributesActivity& value) { m_removeAttributesHasBeenSet = true; m_removeAttributes = value; }

    /**
     * <p>Removes attributes from a message.</p>
     */
    inline void SetRemoveAttributes(RemoveAttributesActivity&& value) { m_removeAttributesHasBeenSet = true; m_removeAttributes = std::move(value); }

    /**
     * <p>Removes attributes from a message.</p>
     */
    inline PipelineActivity& WithRemoveAttributes(const RemoveAttributesActivity& value) { SetRemoveAttributes(value); return *this;}

    /**
     * <p>Removes attributes from a message.</p>
     */
    inline PipelineActivity& WithRemoveAttributes(RemoveAttributesActivity&& value) { SetRemoveAttributes(std::move(value)); return *this;}


    /**
     * <p>Creates a new message using only the specified attributes from the original
     * message. </p>
     */
    inline const SelectAttributesActivity& GetSelectAttributes() const{ return m_selectAttributes; }

    /**
     * <p>Creates a new message using only the specified attributes from the original
     * message. </p>
     */
    inline bool SelectAttributesHasBeenSet() const { return m_selectAttributesHasBeenSet; }

    /**
     * <p>Creates a new message using only the specified attributes from the original
     * message. </p>
     */
    inline void SetSelectAttributes(const SelectAttributesActivity& value) { m_selectAttributesHasBeenSet = true; m_selectAttributes = value; }

    /**
     * <p>Creates a new message using only the specified attributes from the original
     * message. </p>
     */
    inline void SetSelectAttributes(SelectAttributesActivity&& value) { m_selectAttributesHasBeenSet = true; m_selectAttributes = std::move(value); }

    /**
     * <p>Creates a new message using only the specified attributes from the original
     * message. </p>
     */
    inline PipelineActivity& WithSelectAttributes(const SelectAttributesActivity& value) { SetSelectAttributes(value); return *this;}

    /**
     * <p>Creates a new message using only the specified attributes from the original
     * message. </p>
     */
    inline PipelineActivity& WithSelectAttributes(SelectAttributesActivity&& value) { SetSelectAttributes(std::move(value)); return *this;}


    /**
     * <p>Filters a message based on its attributes.</p>
     */
    inline const FilterActivity& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters a message based on its attributes.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters a message based on its attributes.</p>
     */
    inline void SetFilter(const FilterActivity& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters a message based on its attributes.</p>
     */
    inline void SetFilter(FilterActivity&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters a message based on its attributes.</p>
     */
    inline PipelineActivity& WithFilter(const FilterActivity& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters a message based on its attributes.</p>
     */
    inline PipelineActivity& WithFilter(FilterActivity&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>Computes an arithmetic expression using the message's attributes and adds it
     * to the message.</p>
     */
    inline const MathActivity& GetMath() const{ return m_math; }

    /**
     * <p>Computes an arithmetic expression using the message's attributes and adds it
     * to the message.</p>
     */
    inline bool MathHasBeenSet() const { return m_mathHasBeenSet; }

    /**
     * <p>Computes an arithmetic expression using the message's attributes and adds it
     * to the message.</p>
     */
    inline void SetMath(const MathActivity& value) { m_mathHasBeenSet = true; m_math = value; }

    /**
     * <p>Computes an arithmetic expression using the message's attributes and adds it
     * to the message.</p>
     */
    inline void SetMath(MathActivity&& value) { m_mathHasBeenSet = true; m_math = std::move(value); }

    /**
     * <p>Computes an arithmetic expression using the message's attributes and adds it
     * to the message.</p>
     */
    inline PipelineActivity& WithMath(const MathActivity& value) { SetMath(value); return *this;}

    /**
     * <p>Computes an arithmetic expression using the message's attributes and adds it
     * to the message.</p>
     */
    inline PipelineActivity& WithMath(MathActivity&& value) { SetMath(std::move(value)); return *this;}


    /**
     * <p>Adds data from the AWS IoT device registry to your message.</p>
     */
    inline const DeviceRegistryEnrichActivity& GetDeviceRegistryEnrich() const{ return m_deviceRegistryEnrich; }

    /**
     * <p>Adds data from the AWS IoT device registry to your message.</p>
     */
    inline bool DeviceRegistryEnrichHasBeenSet() const { return m_deviceRegistryEnrichHasBeenSet; }

    /**
     * <p>Adds data from the AWS IoT device registry to your message.</p>
     */
    inline void SetDeviceRegistryEnrich(const DeviceRegistryEnrichActivity& value) { m_deviceRegistryEnrichHasBeenSet = true; m_deviceRegistryEnrich = value; }

    /**
     * <p>Adds data from the AWS IoT device registry to your message.</p>
     */
    inline void SetDeviceRegistryEnrich(DeviceRegistryEnrichActivity&& value) { m_deviceRegistryEnrichHasBeenSet = true; m_deviceRegistryEnrich = std::move(value); }

    /**
     * <p>Adds data from the AWS IoT device registry to your message.</p>
     */
    inline PipelineActivity& WithDeviceRegistryEnrich(const DeviceRegistryEnrichActivity& value) { SetDeviceRegistryEnrich(value); return *this;}

    /**
     * <p>Adds data from the AWS IoT device registry to your message.</p>
     */
    inline PipelineActivity& WithDeviceRegistryEnrich(DeviceRegistryEnrichActivity&& value) { SetDeviceRegistryEnrich(std::move(value)); return *this;}


    /**
     * <p>Adds information from the AWS IoT Device Shadows service to a message.</p>
     */
    inline const DeviceShadowEnrichActivity& GetDeviceShadowEnrich() const{ return m_deviceShadowEnrich; }

    /**
     * <p>Adds information from the AWS IoT Device Shadows service to a message.</p>
     */
    inline bool DeviceShadowEnrichHasBeenSet() const { return m_deviceShadowEnrichHasBeenSet; }

    /**
     * <p>Adds information from the AWS IoT Device Shadows service to a message.</p>
     */
    inline void SetDeviceShadowEnrich(const DeviceShadowEnrichActivity& value) { m_deviceShadowEnrichHasBeenSet = true; m_deviceShadowEnrich = value; }

    /**
     * <p>Adds information from the AWS IoT Device Shadows service to a message.</p>
     */
    inline void SetDeviceShadowEnrich(DeviceShadowEnrichActivity&& value) { m_deviceShadowEnrichHasBeenSet = true; m_deviceShadowEnrich = std::move(value); }

    /**
     * <p>Adds information from the AWS IoT Device Shadows service to a message.</p>
     */
    inline PipelineActivity& WithDeviceShadowEnrich(const DeviceShadowEnrichActivity& value) { SetDeviceShadowEnrich(value); return *this;}

    /**
     * <p>Adds information from the AWS IoT Device Shadows service to a message.</p>
     */
    inline PipelineActivity& WithDeviceShadowEnrich(DeviceShadowEnrichActivity&& value) { SetDeviceShadowEnrich(std::move(value)); return *this;}

  private:

    ChannelActivity m_channel;
    bool m_channelHasBeenSet;

    LambdaActivity m_lambda;
    bool m_lambdaHasBeenSet;

    DatastoreActivity m_datastore;
    bool m_datastoreHasBeenSet;

    AddAttributesActivity m_addAttributes;
    bool m_addAttributesHasBeenSet;

    RemoveAttributesActivity m_removeAttributes;
    bool m_removeAttributesHasBeenSet;

    SelectAttributesActivity m_selectAttributes;
    bool m_selectAttributesHasBeenSet;

    FilterActivity m_filter;
    bool m_filterHasBeenSet;

    MathActivity m_math;
    bool m_mathHasBeenSet;

    DeviceRegistryEnrichActivity m_deviceRegistryEnrich;
    bool m_deviceRegistryEnrichHasBeenSet;

    DeviceShadowEnrichActivity m_deviceShadowEnrich;
    bool m_deviceShadowEnrichHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
