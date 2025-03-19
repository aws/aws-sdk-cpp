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
    AWS_IOTSITEWISE_API CompositionDetails() = default;
    AWS_IOTSITEWISE_API CompositionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API CompositionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array detailing the composition relationship for this composite model.</p>
     */
    inline const Aws::Vector<CompositionRelationshipItem>& GetCompositionRelationship() const { return m_compositionRelationship; }
    inline bool CompositionRelationshipHasBeenSet() const { return m_compositionRelationshipHasBeenSet; }
    template<typename CompositionRelationshipT = Aws::Vector<CompositionRelationshipItem>>
    void SetCompositionRelationship(CompositionRelationshipT&& value) { m_compositionRelationshipHasBeenSet = true; m_compositionRelationship = std::forward<CompositionRelationshipT>(value); }
    template<typename CompositionRelationshipT = Aws::Vector<CompositionRelationshipItem>>
    CompositionDetails& WithCompositionRelationship(CompositionRelationshipT&& value) { SetCompositionRelationship(std::forward<CompositionRelationshipT>(value)); return *this;}
    template<typename CompositionRelationshipT = CompositionRelationshipItem>
    CompositionDetails& AddCompositionRelationship(CompositionRelationshipT&& value) { m_compositionRelationshipHasBeenSet = true; m_compositionRelationship.emplace_back(std::forward<CompositionRelationshipT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CompositionRelationshipItem> m_compositionRelationship;
    bool m_compositionRelationshipHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
