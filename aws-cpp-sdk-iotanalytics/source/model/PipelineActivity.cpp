/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/PipelineActivity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

PipelineActivity::PipelineActivity() : 
    m_channelHasBeenSet(false),
    m_lambdaHasBeenSet(false),
    m_datastoreHasBeenSet(false),
    m_addAttributesHasBeenSet(false),
    m_removeAttributesHasBeenSet(false),
    m_selectAttributesHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_mathHasBeenSet(false),
    m_deviceRegistryEnrichHasBeenSet(false),
    m_deviceShadowEnrichHasBeenSet(false)
{
}

PipelineActivity::PipelineActivity(JsonView jsonValue) : 
    m_channelHasBeenSet(false),
    m_lambdaHasBeenSet(false),
    m_datastoreHasBeenSet(false),
    m_addAttributesHasBeenSet(false),
    m_removeAttributesHasBeenSet(false),
    m_selectAttributesHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_mathHasBeenSet(false),
    m_deviceRegistryEnrichHasBeenSet(false),
    m_deviceShadowEnrichHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineActivity& PipelineActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channel"))
  {
    m_channel = jsonValue.GetObject("channel");

    m_channelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambda"))
  {
    m_lambda = jsonValue.GetObject("lambda");

    m_lambdaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datastore"))
  {
    m_datastore = jsonValue.GetObject("datastore");

    m_datastoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addAttributes"))
  {
    m_addAttributes = jsonValue.GetObject("addAttributes");

    m_addAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("removeAttributes"))
  {
    m_removeAttributes = jsonValue.GetObject("removeAttributes");

    m_removeAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("selectAttributes"))
  {
    m_selectAttributes = jsonValue.GetObject("selectAttributes");

    m_selectAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filter"))
  {
    m_filter = jsonValue.GetObject("filter");

    m_filterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("math"))
  {
    m_math = jsonValue.GetObject("math");

    m_mathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceRegistryEnrich"))
  {
    m_deviceRegistryEnrich = jsonValue.GetObject("deviceRegistryEnrich");

    m_deviceRegistryEnrichHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceShadowEnrich"))
  {
    m_deviceShadowEnrich = jsonValue.GetObject("deviceShadowEnrich");

    m_deviceShadowEnrichHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineActivity::Jsonize() const
{
  JsonValue payload;

  if(m_channelHasBeenSet)
  {
   payload.WithObject("channel", m_channel.Jsonize());

  }

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("lambda", m_lambda.Jsonize());

  }

  if(m_datastoreHasBeenSet)
  {
   payload.WithObject("datastore", m_datastore.Jsonize());

  }

  if(m_addAttributesHasBeenSet)
  {
   payload.WithObject("addAttributes", m_addAttributes.Jsonize());

  }

  if(m_removeAttributesHasBeenSet)
  {
   payload.WithObject("removeAttributes", m_removeAttributes.Jsonize());

  }

  if(m_selectAttributesHasBeenSet)
  {
   payload.WithObject("selectAttributes", m_selectAttributes.Jsonize());

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

  }

  if(m_mathHasBeenSet)
  {
   payload.WithObject("math", m_math.Jsonize());

  }

  if(m_deviceRegistryEnrichHasBeenSet)
  {
   payload.WithObject("deviceRegistryEnrich", m_deviceRegistryEnrich.Jsonize());

  }

  if(m_deviceShadowEnrichHasBeenSet)
  {
   payload.WithObject("deviceShadowEnrich", m_deviceShadowEnrich.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
