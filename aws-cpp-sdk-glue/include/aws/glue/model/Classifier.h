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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/GrokClassifier.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Classifiers are written in Python and triggered during a Crawl Task. You can
   * write your own Classifiers to best categorize your data sources and specify the
   * appropriate schemas to use for them. A Classifier first checks whether a given
   * file is in a format it can handle, and then, if so, creates a schema in the form
   * of a <code>StructType</code> object that matches that data format.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Classifier">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Classifier
  {
  public:
    Classifier();
    Classifier(const Aws::Utils::Json::JsonValue& jsonValue);
    Classifier& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A GrokClassifier object.</p>
     */
    inline const GrokClassifier& GetGrokClassifier() const{ return m_grokClassifier; }

    /**
     * <p>A GrokClassifier object.</p>
     */
    inline void SetGrokClassifier(const GrokClassifier& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = value; }

    /**
     * <p>A GrokClassifier object.</p>
     */
    inline void SetGrokClassifier(GrokClassifier&& value) { m_grokClassifierHasBeenSet = true; m_grokClassifier = std::move(value); }

    /**
     * <p>A GrokClassifier object.</p>
     */
    inline Classifier& WithGrokClassifier(const GrokClassifier& value) { SetGrokClassifier(value); return *this;}

    /**
     * <p>A GrokClassifier object.</p>
     */
    inline Classifier& WithGrokClassifier(GrokClassifier&& value) { SetGrokClassifier(std::move(value)); return *this;}

  private:

    GrokClassifier m_grokClassifier;
    bool m_grokClassifierHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
