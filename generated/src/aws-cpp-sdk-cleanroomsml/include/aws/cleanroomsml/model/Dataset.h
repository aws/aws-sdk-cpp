﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/DatasetType.h>
#include <aws/cleanroomsml/model/DatasetInputConfig.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Defines where the training dataset is located, what type of data it contains,
   * and how to access the data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/Dataset">AWS
   * API Reference</a></p>
   */
  class Dataset
  {
  public:
    AWS_CLEANROOMSML_API Dataset();
    AWS_CLEANROOMSML_API Dataset(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Dataset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>What type of information is found in the dataset.</p>
     */
    inline const DatasetType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DatasetType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DatasetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Dataset& WithType(const DatasetType& value) { SetType(value); return *this;}
    inline Dataset& WithType(DatasetType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A DatasetInputConfig object that defines the data source and schema
     * mapping.</p>
     */
    inline const DatasetInputConfig& GetInputConfig() const{ return m_inputConfig; }
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }
    inline void SetInputConfig(const DatasetInputConfig& value) { m_inputConfigHasBeenSet = true; m_inputConfig = value; }
    inline void SetInputConfig(DatasetInputConfig&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::move(value); }
    inline Dataset& WithInputConfig(const DatasetInputConfig& value) { SetInputConfig(value); return *this;}
    inline Dataset& WithInputConfig(DatasetInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}
    ///@}
  private:

    DatasetType m_type;
    bool m_typeHasBeenSet = false;

    DatasetInputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
