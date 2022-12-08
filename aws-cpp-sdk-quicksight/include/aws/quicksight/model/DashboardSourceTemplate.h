/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSetReference.h>
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
   * <p>Dashboard source template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardSourceTemplate">AWS
   * API Reference</a></p>
   */
  class DashboardSourceTemplate
  {
  public:
    AWS_QUICKSIGHT_API DashboardSourceTemplate();
    AWS_QUICKSIGHT_API DashboardSourceTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardSourceTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Dataset references.</p>
     */
    inline const Aws::Vector<DataSetReference>& GetDataSetReferences() const{ return m_dataSetReferences; }

    /**
     * <p>Dataset references.</p>
     */
    inline bool DataSetReferencesHasBeenSet() const { return m_dataSetReferencesHasBeenSet; }

    /**
     * <p>Dataset references.</p>
     */
    inline void SetDataSetReferences(const Aws::Vector<DataSetReference>& value) { m_dataSetReferencesHasBeenSet = true; m_dataSetReferences = value; }

    /**
     * <p>Dataset references.</p>
     */
    inline void SetDataSetReferences(Aws::Vector<DataSetReference>&& value) { m_dataSetReferencesHasBeenSet = true; m_dataSetReferences = std::move(value); }

    /**
     * <p>Dataset references.</p>
     */
    inline DashboardSourceTemplate& WithDataSetReferences(const Aws::Vector<DataSetReference>& value) { SetDataSetReferences(value); return *this;}

    /**
     * <p>Dataset references.</p>
     */
    inline DashboardSourceTemplate& WithDataSetReferences(Aws::Vector<DataSetReference>&& value) { SetDataSetReferences(std::move(value)); return *this;}

    /**
     * <p>Dataset references.</p>
     */
    inline DashboardSourceTemplate& AddDataSetReferences(const DataSetReference& value) { m_dataSetReferencesHasBeenSet = true; m_dataSetReferences.push_back(value); return *this; }

    /**
     * <p>Dataset references.</p>
     */
    inline DashboardSourceTemplate& AddDataSetReferences(DataSetReference&& value) { m_dataSetReferencesHasBeenSet = true; m_dataSetReferences.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline DashboardSourceTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline DashboardSourceTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline DashboardSourceTemplate& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::Vector<DataSetReference> m_dataSetReferences;
    bool m_dataSetReferencesHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
