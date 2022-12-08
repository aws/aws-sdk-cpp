/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/LineageType.h>
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
   * <p>A lineage entity connected to the starting entity(ies).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Vertex">AWS
   * API Reference</a></p>
   */
  class Vertex
  {
  public:
    AWS_SAGEMAKER_API Vertex();
    AWS_SAGEMAKER_API Vertex(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Vertex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the lineage entity resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage entity resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage entity resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage entity resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage entity resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage entity resource.</p>
     */
    inline Vertex& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage entity resource.</p>
     */
    inline Vertex& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage entity resource.</p>
     */
    inline Vertex& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type of the lineage entity resource. For example: <code>DataSet</code>,
     * <code>Model</code>, <code>Endpoint</code>, etc...</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the lineage entity resource. For example: <code>DataSet</code>,
     * <code>Model</code>, <code>Endpoint</code>, etc...</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the lineage entity resource. For example: <code>DataSet</code>,
     * <code>Model</code>, <code>Endpoint</code>, etc...</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the lineage entity resource. For example: <code>DataSet</code>,
     * <code>Model</code>, <code>Endpoint</code>, etc...</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the lineage entity resource. For example: <code>DataSet</code>,
     * <code>Model</code>, <code>Endpoint</code>, etc...</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the lineage entity resource. For example: <code>DataSet</code>,
     * <code>Model</code>, <code>Endpoint</code>, etc...</p>
     */
    inline Vertex& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the lineage entity resource. For example: <code>DataSet</code>,
     * <code>Model</code>, <code>Endpoint</code>, etc...</p>
     */
    inline Vertex& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the lineage entity resource. For example: <code>DataSet</code>,
     * <code>Model</code>, <code>Endpoint</code>, etc...</p>
     */
    inline Vertex& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The type of resource of the lineage entity.</p>
     */
    inline const LineageType& GetLineageType() const{ return m_lineageType; }

    /**
     * <p>The type of resource of the lineage entity.</p>
     */
    inline bool LineageTypeHasBeenSet() const { return m_lineageTypeHasBeenSet; }

    /**
     * <p>The type of resource of the lineage entity.</p>
     */
    inline void SetLineageType(const LineageType& value) { m_lineageTypeHasBeenSet = true; m_lineageType = value; }

    /**
     * <p>The type of resource of the lineage entity.</p>
     */
    inline void SetLineageType(LineageType&& value) { m_lineageTypeHasBeenSet = true; m_lineageType = std::move(value); }

    /**
     * <p>The type of resource of the lineage entity.</p>
     */
    inline Vertex& WithLineageType(const LineageType& value) { SetLineageType(value); return *this;}

    /**
     * <p>The type of resource of the lineage entity.</p>
     */
    inline Vertex& WithLineageType(LineageType&& value) { SetLineageType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    LineageType m_lineageType;
    bool m_lineageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
