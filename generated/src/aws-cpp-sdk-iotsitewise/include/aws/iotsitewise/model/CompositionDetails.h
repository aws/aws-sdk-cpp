/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/CompositionRelationshipItem.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Metadata for the composition relationship established by using
   * <code>composedAssetModelId</code> in <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModelCompositeModel.html">
   * <code>CreateAssetModelCompositeModel</code> </a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CompositionDetails">AWS
   * API Reference</a></p>
   */
  class CompositionDetails
  {
  public:
    AWS_IOTSITEWISE_API CompositionDetails();
    AWS_IOTSITEWISE_API CompositionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API CompositionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array detailing the composition relationship for this composite model.</p>
     */
    inline const Aws::Vector<CompositionRelationshipItem>& GetCompositionRelationship() const{ return m_compositionRelationship; }

    /**
     * <p>An array detailing the composition relationship for this composite model.</p>
     */
    inline bool CompositionRelationshipHasBeenSet() const { return m_compositionRelationshipHasBeenSet; }

    /**
     * <p>An array detailing the composition relationship for this composite model.</p>
     */
    inline void SetCompositionRelationship(const Aws::Vector<CompositionRelationshipItem>& value) { m_compositionRelationshipHasBeenSet = true; m_compositionRelationship = value; }

    /**
     * <p>An array detailing the composition relationship for this composite model.</p>
     */
    inline void SetCompositionRelationship(Aws::Vector<CompositionRelationshipItem>&& value) { m_compositionRelationshipHasBeenSet = true; m_compositionRelationship = std::move(value); }

    /**
     * <p>An array detailing the composition relationship for this composite model.</p>
     */
    inline CompositionDetails& WithCompositionRelationship(const Aws::Vector<CompositionRelationshipItem>& value) { SetCompositionRelationship(value); return *this;}

    /**
     * <p>An array detailing the composition relationship for this composite model.</p>
     */
    inline CompositionDetails& WithCompositionRelationship(Aws::Vector<CompositionRelationshipItem>&& value) { SetCompositionRelationship(std::move(value)); return *this;}

    /**
     * <p>An array detailing the composition relationship for this composite model.</p>
     */
    inline CompositionDetails& AddCompositionRelationship(const CompositionRelationshipItem& value) { m_compositionRelationshipHasBeenSet = true; m_compositionRelationship.push_back(value); return *this; }

    /**
     * <p>An array detailing the composition relationship for this composite model.</p>
     */
    inline CompositionDetails& AddCompositionRelationship(CompositionRelationshipItem&& value) { m_compositionRelationshipHasBeenSet = true; m_compositionRelationship.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CompositionRelationshipItem> m_compositionRelationship;
    bool m_compositionRelationshipHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
