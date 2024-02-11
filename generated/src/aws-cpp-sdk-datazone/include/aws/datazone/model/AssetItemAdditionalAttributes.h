/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/FormOutput.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The additional attributes of an inventory asset.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetItemAdditionalAttributes">AWS
   * API Reference</a></p>
   */
  class AssetItemAdditionalAttributes
  {
  public:
    AWS_DATAZONE_API AssetItemAdditionalAttributes();
    AWS_DATAZONE_API AssetItemAdditionalAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetItemAdditionalAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The forms included in the additional attributes of an inventory asset.</p>
     */
    inline const Aws::Vector<FormOutput>& GetFormsOutput() const{ return m_formsOutput; }

    /**
     * <p>The forms included in the additional attributes of an inventory asset.</p>
     */
    inline bool FormsOutputHasBeenSet() const { return m_formsOutputHasBeenSet; }

    /**
     * <p>The forms included in the additional attributes of an inventory asset.</p>
     */
    inline void SetFormsOutput(const Aws::Vector<FormOutput>& value) { m_formsOutputHasBeenSet = true; m_formsOutput = value; }

    /**
     * <p>The forms included in the additional attributes of an inventory asset.</p>
     */
    inline void SetFormsOutput(Aws::Vector<FormOutput>&& value) { m_formsOutputHasBeenSet = true; m_formsOutput = std::move(value); }

    /**
     * <p>The forms included in the additional attributes of an inventory asset.</p>
     */
    inline AssetItemAdditionalAttributes& WithFormsOutput(const Aws::Vector<FormOutput>& value) { SetFormsOutput(value); return *this;}

    /**
     * <p>The forms included in the additional attributes of an inventory asset.</p>
     */
    inline AssetItemAdditionalAttributes& WithFormsOutput(Aws::Vector<FormOutput>&& value) { SetFormsOutput(std::move(value)); return *this;}

    /**
     * <p>The forms included in the additional attributes of an inventory asset.</p>
     */
    inline AssetItemAdditionalAttributes& AddFormsOutput(const FormOutput& value) { m_formsOutputHasBeenSet = true; m_formsOutput.push_back(value); return *this; }

    /**
     * <p>The forms included in the additional attributes of an inventory asset.</p>
     */
    inline AssetItemAdditionalAttributes& AddFormsOutput(FormOutput&& value) { m_formsOutputHasBeenSet = true; m_formsOutput.push_back(std::move(value)); return *this; }


    /**
     * <p>The read-only forms included in the additional attributes of an inventory
     * asset.</p>
     */
    inline const Aws::Vector<FormOutput>& GetReadOnlyFormsOutput() const{ return m_readOnlyFormsOutput; }

    /**
     * <p>The read-only forms included in the additional attributes of an inventory
     * asset.</p>
     */
    inline bool ReadOnlyFormsOutputHasBeenSet() const { return m_readOnlyFormsOutputHasBeenSet; }

    /**
     * <p>The read-only forms included in the additional attributes of an inventory
     * asset.</p>
     */
    inline void SetReadOnlyFormsOutput(const Aws::Vector<FormOutput>& value) { m_readOnlyFormsOutputHasBeenSet = true; m_readOnlyFormsOutput = value; }

    /**
     * <p>The read-only forms included in the additional attributes of an inventory
     * asset.</p>
     */
    inline void SetReadOnlyFormsOutput(Aws::Vector<FormOutput>&& value) { m_readOnlyFormsOutputHasBeenSet = true; m_readOnlyFormsOutput = std::move(value); }

    /**
     * <p>The read-only forms included in the additional attributes of an inventory
     * asset.</p>
     */
    inline AssetItemAdditionalAttributes& WithReadOnlyFormsOutput(const Aws::Vector<FormOutput>& value) { SetReadOnlyFormsOutput(value); return *this;}

    /**
     * <p>The read-only forms included in the additional attributes of an inventory
     * asset.</p>
     */
    inline AssetItemAdditionalAttributes& WithReadOnlyFormsOutput(Aws::Vector<FormOutput>&& value) { SetReadOnlyFormsOutput(std::move(value)); return *this;}

    /**
     * <p>The read-only forms included in the additional attributes of an inventory
     * asset.</p>
     */
    inline AssetItemAdditionalAttributes& AddReadOnlyFormsOutput(const FormOutput& value) { m_readOnlyFormsOutputHasBeenSet = true; m_readOnlyFormsOutput.push_back(value); return *this; }

    /**
     * <p>The read-only forms included in the additional attributes of an inventory
     * asset.</p>
     */
    inline AssetItemAdditionalAttributes& AddReadOnlyFormsOutput(FormOutput&& value) { m_readOnlyFormsOutputHasBeenSet = true; m_readOnlyFormsOutput.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FormOutput> m_formsOutput;
    bool m_formsOutputHasBeenSet = false;

    Aws::Vector<FormOutput> m_readOnlyFormsOutput;
    bool m_readOnlyFormsOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
