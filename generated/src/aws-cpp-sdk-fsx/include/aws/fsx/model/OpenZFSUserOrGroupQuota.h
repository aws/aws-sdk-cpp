/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/OpenZFSQuotaType.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Used to configure quotas that define how much storage a user or group can use
   * on an FSx for OpenZFS volume. For more information, see <a
   * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/managing-volumes.html#volume-properties">Volume
   * properties</a> in the FSx for OpenZFS User Guide. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OpenZFSUserOrGroupQuota">AWS
   * API Reference</a></p>
   */
  class OpenZFSUserOrGroupQuota
  {
  public:
    AWS_FSX_API OpenZFSUserOrGroupQuota() = default;
    AWS_FSX_API OpenZFSUserOrGroupQuota(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OpenZFSUserOrGroupQuota& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the quota applies to a user or group.</p>
     */
    inline OpenZFSQuotaType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(OpenZFSQuotaType value) { m_typeHasBeenSet = true; m_type = value; }
    inline OpenZFSUserOrGroupQuota& WithType(OpenZFSQuotaType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user or group that the quota applies to.</p>
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline OpenZFSUserOrGroupQuota& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or group's storage quota, in gibibytes (GiB).</p>
     */
    inline int GetStorageCapacityQuotaGiB() const { return m_storageCapacityQuotaGiB; }
    inline bool StorageCapacityQuotaGiBHasBeenSet() const { return m_storageCapacityQuotaGiBHasBeenSet; }
    inline void SetStorageCapacityQuotaGiB(int value) { m_storageCapacityQuotaGiBHasBeenSet = true; m_storageCapacityQuotaGiB = value; }
    inline OpenZFSUserOrGroupQuota& WithStorageCapacityQuotaGiB(int value) { SetStorageCapacityQuotaGiB(value); return *this;}
    ///@}
  private:

    OpenZFSQuotaType m_type{OpenZFSQuotaType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_id{0};
    bool m_idHasBeenSet = false;

    int m_storageCapacityQuotaGiB{0};
    bool m_storageCapacityQuotaGiBHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
