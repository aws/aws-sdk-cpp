/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/BackupRetentionType.h>
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
namespace CloudHSMV2
{
namespace Model
{

  /**
   * <p>A policy that defines the number of days to retain backups.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/BackupRetentionPolicy">AWS
   * API Reference</a></p>
   */
  class BackupRetentionPolicy
  {
  public:
    AWS_CLOUDHSMV2_API BackupRetentionPolicy() = default;
    AWS_CLOUDHSMV2_API BackupRetentionPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API BackupRetentionPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of backup retention policy. For the <code>DAYS</code> type, the
     * value is the number of days to retain backups.</p>
     */
    inline BackupRetentionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(BackupRetentionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline BackupRetentionPolicy& WithType(BackupRetentionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use a value between 7 - 379.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    BackupRetentionPolicy& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    BackupRetentionType m_type{BackupRetentionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
