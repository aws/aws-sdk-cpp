/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>The definition for a provisioned capacity unit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ProvisionedCapacityDescription">AWS
   * API Reference</a></p>
   */
  class ProvisionedCapacityDescription
  {
  public:
    AWS_GLACIER_API ProvisionedCapacityDescription();
    AWS_GLACIER_API ProvisionedCapacityDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API ProvisionedCapacityDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline const Aws::String& GetCapacityId() const{ return m_capacityId; }
    inline bool CapacityIdHasBeenSet() const { return m_capacityIdHasBeenSet; }
    inline void SetCapacityId(const Aws::String& value) { m_capacityIdHasBeenSet = true; m_capacityId = value; }
    inline void SetCapacityId(Aws::String&& value) { m_capacityIdHasBeenSet = true; m_capacityId = std::move(value); }
    inline void SetCapacityId(const char* value) { m_capacityIdHasBeenSet = true; m_capacityId.assign(value); }
    inline ProvisionedCapacityDescription& WithCapacityId(const Aws::String& value) { SetCapacityId(value); return *this;}
    inline ProvisionedCapacityDescription& WithCapacityId(Aws::String&& value) { SetCapacityId(std::move(value)); return *this;}
    inline ProvisionedCapacityDescription& WithCapacityId(const char* value) { SetCapacityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the provisioned capacity unit was purchased, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }
    inline ProvisionedCapacityDescription& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}
    inline ProvisionedCapacityDescription& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}
    inline ProvisionedCapacityDescription& WithStartDate(const char* value) { SetStartDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the provisioned capacity unit expires, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::String& GetExpirationDate() const{ return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    inline void SetExpirationDate(const Aws::String& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }
    inline void SetExpirationDate(Aws::String&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }
    inline void SetExpirationDate(const char* value) { m_expirationDateHasBeenSet = true; m_expirationDate.assign(value); }
    inline ProvisionedCapacityDescription& WithExpirationDate(const Aws::String& value) { SetExpirationDate(value); return *this;}
    inline ProvisionedCapacityDescription& WithExpirationDate(Aws::String&& value) { SetExpirationDate(std::move(value)); return *this;}
    inline ProvisionedCapacityDescription& WithExpirationDate(const char* value) { SetExpirationDate(value); return *this;}
    ///@}
  private:

    Aws::String m_capacityId;
    bool m_capacityIdHasBeenSet = false;

    Aws::String m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::String m_expirationDate;
    bool m_expirationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
