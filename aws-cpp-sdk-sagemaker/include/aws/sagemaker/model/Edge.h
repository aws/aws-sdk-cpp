/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AssociationEdgeType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A directed edge connecting two lineage entities.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Edge">AWS
   * API Reference</a></p>
   */
  class Edge
  {
  public:
    AWS_SAGEMAKER_API Edge();
    AWS_SAGEMAKER_API Edge(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Edge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the source lineage entity of the directed
     * edge.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source lineage entity of the directed
     * edge.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source lineage entity of the directed
     * edge.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source lineage entity of the directed
     * edge.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source lineage entity of the directed
     * edge.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source lineage entity of the directed
     * edge.</p>
     */
    inline Edge& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source lineage entity of the directed
     * edge.</p>
     */
    inline Edge& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source lineage entity of the directed
     * edge.</p>
     */
    inline Edge& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the destination lineage entity of the
     * directed edge.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination lineage entity of the
     * directed edge.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination lineage entity of the
     * directed edge.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination lineage entity of the
     * directed edge.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination lineage entity of the
     * directed edge.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination lineage entity of the
     * directed edge.</p>
     */
    inline Edge& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination lineage entity of the
     * directed edge.</p>
     */
    inline Edge& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination lineage entity of the
     * directed edge.</p>
     */
    inline Edge& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>The type of the Association(Edge) between the source and destination. For
     * example <code>ContributedTo</code>, <code>Produced</code>, or
     * <code>DerivedFrom</code>.</p>
     */
    inline const AssociationEdgeType& GetAssociationType() const{ return m_associationType; }

    /**
     * <p>The type of the Association(Edge) between the source and destination. For
     * example <code>ContributedTo</code>, <code>Produced</code>, or
     * <code>DerivedFrom</code>.</p>
     */
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }

    /**
     * <p>The type of the Association(Edge) between the source and destination. For
     * example <code>ContributedTo</code>, <code>Produced</code>, or
     * <code>DerivedFrom</code>.</p>
     */
    inline void SetAssociationType(const AssociationEdgeType& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }

    /**
     * <p>The type of the Association(Edge) between the source and destination. For
     * example <code>ContributedTo</code>, <code>Produced</code>, or
     * <code>DerivedFrom</code>.</p>
     */
    inline void SetAssociationType(AssociationEdgeType&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }

    /**
     * <p>The type of the Association(Edge) between the source and destination. For
     * example <code>ContributedTo</code>, <code>Produced</code>, or
     * <code>DerivedFrom</code>.</p>
     */
    inline Edge& WithAssociationType(const AssociationEdgeType& value) { SetAssociationType(value); return *this;}

    /**
     * <p>The type of the Association(Edge) between the source and destination. For
     * example <code>ContributedTo</code>, <code>Produced</code>, or
     * <code>DerivedFrom</code>.</p>
     */
    inline Edge& WithAssociationType(AssociationEdgeType&& value) { SetAssociationType(std::move(value)); return *this;}

  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    AssociationEdgeType m_associationType;
    bool m_associationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
