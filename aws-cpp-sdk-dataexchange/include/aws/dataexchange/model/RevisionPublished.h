/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
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
namespace DataExchange
{
namespace Model
{

  class AWS_DATAEXCHANGE_API RevisionPublished
  {
  public:
    RevisionPublished();
    RevisionPublished(Aws::Utils::Json::JsonView jsonValue);
    RevisionPublished& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    
    inline RevisionPublished& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    
    inline RevisionPublished& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    
    inline RevisionPublished& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}

  private:

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
