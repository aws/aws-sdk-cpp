/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Classifier.h>
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

Classifier::Classifier() : 
    m_grokClassifierHasBeenSet(false),
    m_xMLClassifierHasBeenSet(false),
    m_jsonClassifierHasBeenSet(false),
    m_csvClassifierHasBeenSet(false)
{
}

Classifier::Classifier(JsonView jsonValue) : 
    m_grokClassifierHasBeenSet(false),
    m_xMLClassifierHasBeenSet(false),
    m_jsonClassifierHasBeenSet(false),
    m_csvClassifierHasBeenSet(false)
{
  *this = jsonValue;
}

Classifier& Classifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GrokClassifier"))
  {
    m_grokClassifier = jsonValue.GetObject("GrokClassifier");

    m_grokClassifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XMLClassifier"))
  {
    m_xMLClassifier = jsonValue.GetObject("XMLClassifier");

    m_xMLClassifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JsonClassifier"))
  {
    m_jsonClassifier = jsonValue.GetObject("JsonClassifier");

    m_jsonClassifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CsvClassifier"))
  {
    m_csvClassifier = jsonValue.GetObject("CsvClassifier");

    m_csvClassifierHasBeenSet = true;
  }

  return *this;
}

JsonValue Classifier::Jsonize() const
{
  JsonValue payload;

  if(m_grokClassifierHasBeenSet)
  {
   payload.WithObject("GrokClassifier", m_grokClassifier.Jsonize());

  }

  if(m_xMLClassifierHasBeenSet)
  {
   payload.WithObject("XMLClassifier", m_xMLClassifier.Jsonize());

  }

  if(m_jsonClassifierHasBeenSet)
  {
   payload.WithObject("JsonClassifier", m_jsonClassifier.Jsonize());

  }

  if(m_csvClassifierHasBeenSet)
  {
   payload.WithObject("CsvClassifier", m_csvClassifier.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
