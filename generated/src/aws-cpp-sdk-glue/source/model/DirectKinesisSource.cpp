/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DirectKinesisSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DirectKinesisSource::DirectKinesisSource() : 
    m_nameHasBeenSet(false),
    m_windowSize(0),
    m_windowSizeHasBeenSet(false),
    m_detectSchema(false),
    m_detectSchemaHasBeenSet(false),
    m_streamingOptionsHasBeenSet(false),
    m_dataPreviewOptionsHasBeenSet(false)
{
}

DirectKinesisSource::DirectKinesisSource(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_windowSize(0),
    m_windowSizeHasBeenSet(false),
    m_detectSchema(false),
    m_detectSchemaHasBeenSet(false),
    m_streamingOptionsHasBeenSet(false),
    m_dataPreviewOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

DirectKinesisSource& DirectKinesisSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WindowSize"))
  {
    m_windowSize = jsonValue.GetInteger("WindowSize");

    m_windowSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetectSchema"))
  {
    m_detectSchema = jsonValue.GetBool("DetectSchema");

    m_detectSchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamingOptions"))
  {
    m_streamingOptions = jsonValue.GetObject("StreamingOptions");

    m_streamingOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPreviewOptions"))
  {
    m_dataPreviewOptions = jsonValue.GetObject("DataPreviewOptions");

    m_dataPreviewOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DirectKinesisSource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_windowSizeHasBeenSet)
  {
   payload.WithInteger("WindowSize", m_windowSize);

  }

  if(m_detectSchemaHasBeenSet)
  {
   payload.WithBool("DetectSchema", m_detectSchema);

  }

  if(m_streamingOptionsHasBeenSet)
  {
   payload.WithObject("StreamingOptions", m_streamingOptions.Jsonize());

  }

  if(m_dataPreviewOptionsHasBeenSet)
  {
   payload.WithObject("DataPreviewOptions", m_dataPreviewOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
