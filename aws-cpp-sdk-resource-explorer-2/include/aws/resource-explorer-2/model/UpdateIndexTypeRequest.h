/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/model/IndexType.h>
#include <utility>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

  /**
   */
  class UpdateIndexTypeRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API UpdateIndexTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIndexType"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you want to update.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you want to update.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you want to update.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you want to update.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you want to update.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you want to update.</p>
     */
    inline UpdateIndexTypeRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you want to update.</p>
     */
    inline UpdateIndexTypeRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you want to update.</p>
     */
    inline UpdateIndexTypeRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type of the index. To understand the difference between
     * <code>LOCAL</code> and <code>AGGREGATOR</code>, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
     * on cross-Region search</a> in the <i>Amazon Web Services Resource Explorer User
     * Guide</i>.</p>
     */
    inline const IndexType& GetType() const{ return m_type; }

    /**
     * <p>The type of the index. To understand the difference between
     * <code>LOCAL</code> and <code>AGGREGATOR</code>, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
     * on cross-Region search</a> in the <i>Amazon Web Services Resource Explorer User
     * Guide</i>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the index. To understand the difference between
     * <code>LOCAL</code> and <code>AGGREGATOR</code>, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
     * on cross-Region search</a> in the <i>Amazon Web Services Resource Explorer User
     * Guide</i>.</p>
     */
    inline void SetType(const IndexType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the index. To understand the difference between
     * <code>LOCAL</code> and <code>AGGREGATOR</code>, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
     * on cross-Region search</a> in the <i>Amazon Web Services Resource Explorer User
     * Guide</i>.</p>
     */
    inline void SetType(IndexType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the index. To understand the difference between
     * <code>LOCAL</code> and <code>AGGREGATOR</code>, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
     * on cross-Region search</a> in the <i>Amazon Web Services Resource Explorer User
     * Guide</i>.</p>
     */
    inline UpdateIndexTypeRequest& WithType(const IndexType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the index. To understand the difference between
     * <code>LOCAL</code> and <code>AGGREGATOR</code>, see <a
     * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/manage-aggregator-region.html">Turning
     * on cross-Region search</a> in the <i>Amazon Web Services Resource Explorer User
     * Guide</i>.</p>
     */
    inline UpdateIndexTypeRequest& WithType(IndexType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    IndexType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
