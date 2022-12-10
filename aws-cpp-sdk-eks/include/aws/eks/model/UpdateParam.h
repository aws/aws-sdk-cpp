/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateParam
  {
  public:
    AWS_EKS_API UpdateParam();
    AWS_EKS_API UpdateParam(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API UpdateParam& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
