/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/AmazonRedshiftNodeData.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an Amazon Redshift source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AmazonRedshiftSource">AWS
   * API Reference</a></p>
   */
  class AmazonRedshiftSource
  {
  public:
    AWS_GLUE_API AmazonRedshiftSource();
    AWS_GLUE_API AmazonRedshiftSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AmazonRedshiftSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon Redshift source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon Redshift source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon Redshift source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon Redshift source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon Redshift source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon Redshift source.</p>
     */
    inline AmazonRedshiftSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon Redshift source.</p>
     */
    inline AmazonRedshiftSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Redshift source.</p>
     */
    inline AmazonRedshiftSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the data of the Amazon Reshift source node.</p>
     */
    inline const AmazonRedshiftNodeData& GetData() const{ return m_data; }

    /**
     * <p>Specifies the data of the Amazon Reshift source node.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>Specifies the data of the Amazon Reshift source node.</p>
     */
    inline void SetData(const AmazonRedshiftNodeData& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>Specifies the data of the Amazon Reshift source node.</p>
     */
    inline void SetData(AmazonRedshiftNodeData&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>Specifies the data of the Amazon Reshift source node.</p>
     */
    inline AmazonRedshiftSource& WithData(const AmazonRedshiftNodeData& value) { SetData(value); return *this;}

    /**
     * <p>Specifies the data of the Amazon Reshift source node.</p>
     */
    inline AmazonRedshiftSource& WithData(AmazonRedshiftNodeData&& value) { SetData(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AmazonRedshiftNodeData m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
