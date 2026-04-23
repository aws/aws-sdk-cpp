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
  class AWS_GLACIER_API ProvisionedCapacityDescription
  {
  public:
    ProvisionedCapacityDescription();
    ProvisionedCapacityDescription(Aws::Utils::Json::JsonView jsonValue);
    ProvisionedCapacityDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline const Aws::String& GetCapacityId() const{ return m_capacityId; }

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline bool CapacityIdHasBeenSet() const { return m_capacityIdHasBeenSet; }

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline void SetCapacityId(const Aws::String& value) { m_capacityIdHasBeenSet = true; m_capacityId = value; }

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline void SetCapacityId(Aws::String&& value) { m_capacityIdHasBeenSet = true; m_capacityId = std::move(value); }

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline void SetCapacityId(const char* value) { m_capacityIdHasBeenSet = true; m_capacityId.assign(value); }

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline ProvisionedCapacityDescription& WithCapacityId(const Aws::String& value) { SetCapacityId(value); return *this;}

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline ProvisionedCapacityDescription& WithCapacityId(Aws::String&& value) { SetCapacityId(std::move(value)); return *this;}

    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline ProvisionedCapacityDescription& WithCapacityId(const char* value) { SetCapacityId(value); return *this;}


    /**
     * <p>The date that the provisioned capacity unit was purchased, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The date that the provisioned capacity unit was purchased, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The date that the provisioned capacity unit was purchased, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The date that the provisioned capacity unit was purchased, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The date that the provisioned capacity unit was purchased, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }

    /**
     * <p>The date that the provisioned capacity unit was purchased, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ProvisionedCapacityDescription& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}

    /**
     * <p>The date that the provisioned capacity unit was purchased, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ProvisionedCapacityDescription& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}

    /**
     * <p>The date that the provisioned capacity unit was purchased, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ProvisionedCapacityDescription& WithStartDate(const char* value) { SetStartDate(value); return *this;}


    /**
     * <p>The date that the provisioned capacity unit expires, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::String& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The date that the provisioned capacity unit expires, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }

    /**
     * <p>The date that the provisioned capacity unit expires, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline void SetExpirationDate(const Aws::String& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    /**
     * <p>The date that the provisioned capacity unit expires, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline void SetExpirationDate(Aws::String&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }

    /**
     * <p>The date that the provisioned capacity unit expires, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline void SetExpirationDate(const char* value) { m_expirationDateHasBeenSet = true; m_expirationDate.assign(value); }

    /**
     * <p>The date that the provisioned capacity unit expires, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline ProvisionedCapacityDescription& WithExpirationDate(const Aws::String& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The date that the provisioned capacity unit expires, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline ProvisionedCapacityDescription& WithExpirationDate(Aws::String&& value) { SetExpirationDate(std::move(value)); return *this;}

    /**
     * <p>The date that the provisioned capacity unit expires, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline ProvisionedCapacityDescription& WithExpirationDate(const char* value) { SetExpirationDate(value); return *this;}

  private:

    Aws::String m_capacityId;
    bool m_capacityIdHasBeenSet;

    Aws::String m_startDate;
    bool m_startDateHasBeenSet;

    Aws::String m_expirationDate;
    bool m_expirationDateHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
