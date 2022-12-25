/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Dataset reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetReference">AWS
   * API Reference</a></p>
   */
  class DataSetReference
  {
  public:
    AWS_QUICKSIGHT_API DataSetReference();
    AWS_QUICKSIGHT_API DataSetReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Dataset placeholder.</p>
     */
    inline const Aws::String& GetDataSetPlaceholder() const{ return m_dataSetPlaceholder; }

    /**
     * <p>Dataset placeholder.</p>
     */
    inline bool DataSetPlaceholderHasBeenSet() const { return m_dataSetPlaceholderHasBeenSet; }

    /**
     * <p>Dataset placeholder.</p>
     */
    inline void SetDataSetPlaceholder(const Aws::String& value) { m_dataSetPlaceholderHasBeenSet = true; m_dataSetPlaceholder = value; }

    /**
     * <p>Dataset placeholder.</p>
     */
    inline void SetDataSetPlaceholder(Aws::String&& value) { m_dataSetPlaceholderHasBeenSet = true; m_dataSetPlaceholder = std::move(value); }

    /**
     * <p>Dataset placeholder.</p>
     */
    inline void SetDataSetPlaceholder(const char* value) { m_dataSetPlaceholderHasBeenSet = true; m_dataSetPlaceholder.assign(value); }

    /**
     * <p>Dataset placeholder.</p>
     */
    inline DataSetReference& WithDataSetPlaceholder(const Aws::String& value) { SetDataSetPlaceholder(value); return *this;}

    /**
     * <p>Dataset placeholder.</p>
     */
    inline DataSetReference& WithDataSetPlaceholder(Aws::String&& value) { SetDataSetPlaceholder(std::move(value)); return *this;}

    /**
     * <p>Dataset placeholder.</p>
     */
    inline DataSetReference& WithDataSetPlaceholder(const char* value) { SetDataSetPlaceholder(value); return *this;}


    /**
     * <p>Dataset Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDataSetArn() const{ return m_dataSetArn; }

    /**
     * <p>Dataset Amazon Resource Name (ARN).</p>
     */
    inline bool DataSetArnHasBeenSet() const { return m_dataSetArnHasBeenSet; }

    /**
     * <p>Dataset Amazon Resource Name (ARN).</p>
     */
    inline void SetDataSetArn(const Aws::String& value) { m_dataSetArnHasBeenSet = true; m_dataSetArn = value; }

    /**
     * <p>Dataset Amazon Resource Name (ARN).</p>
     */
    inline void SetDataSetArn(Aws::String&& value) { m_dataSetArnHasBeenSet = true; m_dataSetArn = std::move(value); }

    /**
     * <p>Dataset Amazon Resource Name (ARN).</p>
     */
    inline void SetDataSetArn(const char* value) { m_dataSetArnHasBeenSet = true; m_dataSetArn.assign(value); }

    /**
     * <p>Dataset Amazon Resource Name (ARN).</p>
     */
    inline DataSetReference& WithDataSetArn(const Aws::String& value) { SetDataSetArn(value); return *this;}

    /**
     * <p>Dataset Amazon Resource Name (ARN).</p>
     */
    inline DataSetReference& WithDataSetArn(Aws::String&& value) { SetDataSetArn(std::move(value)); return *this;}

    /**
     * <p>Dataset Amazon Resource Name (ARN).</p>
     */
    inline DataSetReference& WithDataSetArn(const char* value) { SetDataSetArn(value); return *this;}

  private:

    Aws::String m_dataSetPlaceholder;
    bool m_dataSetPlaceholderHasBeenSet = false;

    Aws::String m_dataSetArn;
    bool m_dataSetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
