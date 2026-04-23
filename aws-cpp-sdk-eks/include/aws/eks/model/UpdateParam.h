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
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/UpdateParamType.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing the details of an update request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateParam">AWS API
   * Reference</a></p>
   */
  class AWS_EKS_API UpdateParam
  {
  public:
    UpdateParam();
    UpdateParam(Aws::Utils::Json::JsonView jsonValue);
    UpdateParam& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The keys associated with an update request.</p>
     */
    inline const UpdateParamType& GetType() const{ return m_type; }

    /**
     * <p>The keys associated with an update request.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The keys associated with an update request.</p>
     */
    inline void SetType(const UpdateParamType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The keys associated with an update request.</p>
     */
    inline void SetType(UpdateParamType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The keys associated with an update request.</p>
     */
    inline UpdateParam& WithType(const UpdateParamType& value) { SetType(value); return *this;}

    /**
     * <p>The keys associated with an update request.</p>
     */
    inline UpdateParam& WithType(UpdateParamType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The value of the keys submitted as part of an update request.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the keys submitted as part of an update request.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the keys submitted as part of an update request.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the keys submitted as part of an update request.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the keys submitted as part of an update request.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the keys submitted as part of an update request.</p>
     */
    inline UpdateParam& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the keys submitted as part of an update request.</p>
     */
    inline UpdateParam& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the keys submitted as part of an update request.</p>
     */
    inline UpdateParam& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    UpdateParamType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
