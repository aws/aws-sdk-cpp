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
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The model variable.&gt;</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ModelVariable">AWS
   * API Reference</a></p>
   */
  class AWS_FRAUDDETECTOR_API ModelVariable
  {
  public:
    ModelVariable();
    ModelVariable(Aws::Utils::Json::JsonView jsonValue);
    ModelVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The model variable's name.&gt;</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The model variable's name.&gt;</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The model variable's name.&gt;</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The model variable's name.&gt;</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The model variable's name.&gt;</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The model variable's name.&gt;</p>
     */
    inline ModelVariable& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The model variable's name.&gt;</p>
     */
    inline ModelVariable& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The model variable's name.&gt;</p>
     */
    inline ModelVariable& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The model variable's index.&gt;</p>
     */
    inline int GetIndex() const{ return m_index; }

    /**
     * <p>The model variable's index.&gt;</p>
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * <p>The model variable's index.&gt;</p>
     */
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * <p>The model variable's index.&gt;</p>
     */
    inline ModelVariable& WithIndex(int value) { SetIndex(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_index;
    bool m_indexHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
