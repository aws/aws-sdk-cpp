/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The attribute details on a specific Savings Plan.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansDetails">AWS
   * API Reference</a></p>
   */
  class SavingsPlansDetails
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansDetails();
    AWS_COSTEXPLORER_API SavingsPlansDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A collection of Amazon Web Services resources in a geographic area. Each
     * Amazon Web Services Region is isolated and independent of the other Regions.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline SavingsPlansDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline SavingsPlansDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline SavingsPlansDetails& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A group of instance types that Savings Plans applies to.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }
    inline SavingsPlansDetails& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}
    inline SavingsPlansDetails& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}
    inline SavingsPlansDetails& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that's used to distinguish Savings Plans from one another.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }
    inline SavingsPlansDetails& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}
    inline SavingsPlansDetails& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}
    inline SavingsPlansDetails& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
