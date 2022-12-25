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
   * <p>The configuration for how much storage a user or group can use on the volume.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OpenZFSUserOrGroupQuota">AWS
   * API Reference</a></p>
   */
  class OpenZFSUserOrGroupQuota
  {
  public:
    AWS_FSX_API OpenZFSUserOrGroupQuota();
    AWS_FSX_API OpenZFSUserOrGroupQuota(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OpenZFSUserOrGroupQuota& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that specifies whether the quota applies to a user or group.</p>
     */
    inline const OpenZFSQuotaType& GetType() const{ return m_type; }

    /**
     * <p>A value that specifies whether the quota applies to a user or group.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>A value that specifies whether the quota applies to a user or group.</p>
     */
    inline void SetType(const OpenZFSQuotaType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>A value that specifies whether the quota applies to a user or group.</p>
     */
    inline void SetType(OpenZFSQuotaType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>A value that specifies whether the quota applies to a user or group.</p>
     */
    inline OpenZFSUserOrGroupQuota& WithType(const OpenZFSQuotaType& value) { SetType(value); return *this;}

    /**
     * <p>A value that specifies whether the quota applies to a user or group.</p>
     */
    inline OpenZFSUserOrGroupQuota& WithType(OpenZFSQuotaType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ID of the user or group.</p>
     */
    inline int GetId() const{ return m_id; }

    /**
     * <p>The ID of the user or group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the user or group.</p>
     */
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the user or group.</p>
     */
    inline OpenZFSUserOrGroupQuota& WithId(int value) { SetId(value); return *this;}


    /**
     * <p>The amount of storage that the user or group can use in gibibytes (GiB).</p>
     */
    inline int GetStorageCapacityQuotaGiB() const{ return m_storageCapacityQuotaGiB; }

    /**
     * <p>The amount of storage that the user or group can use in gibibytes (GiB).</p>
     */
    inline bool StorageCapacityQuotaGiBHasBeenSet() const { return m_storageCapacityQuotaGiBHasBeenSet; }

    /**
     * <p>The amount of storage that the user or group can use in gibibytes (GiB).</p>
     */
    inline void SetStorageCapacityQuotaGiB(int value) { m_storageCapacityQuotaGiBHasBeenSet = true; m_storageCapacityQuotaGiB = value; }

    /**
     * <p>The amount of storage that the user or group can use in gibibytes (GiB).</p>
     */
    inline OpenZFSUserOrGroupQuota& WithStorageCapacityQuotaGiB(int value) { SetStorageCapacityQuotaGiB(value); return *this;}

  private:

    OpenZFSQuotaType m_type;
    bool m_typeHasBeenSet = false;

    int m_id;
    bool m_idHasBeenSet = false;

    int m_storageCapacityQuotaGiB;
    bool m_storageCapacityQuotaGiBHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
