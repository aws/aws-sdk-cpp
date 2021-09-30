/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/AutoExportRevisionToS3RequestDetails.h>
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

  class AWS_DATAEXCHANGE_API Action
  {
  public:
    Action();
    Action(Aws::Utils::Json::JsonView jsonValue);
    Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AutoExportRevisionToS3RequestDetails& GetExportRevisionToS3() const{ return m_exportRevisionToS3; }

    
    inline bool ExportRevisionToS3HasBeenSet() const { return m_exportRevisionToS3HasBeenSet; }

    
    inline void SetExportRevisionToS3(const AutoExportRevisionToS3RequestDetails& value) { m_exportRevisionToS3HasBeenSet = true; m_exportRevisionToS3 = value; }

    
    inline void SetExportRevisionToS3(AutoExportRevisionToS3RequestDetails&& value) { m_exportRevisionToS3HasBeenSet = true; m_exportRevisionToS3 = std::move(value); }

    
    inline Action& WithExportRevisionToS3(const AutoExportRevisionToS3RequestDetails& value) { SetExportRevisionToS3(value); return *this;}

    
    inline Action& WithExportRevisionToS3(AutoExportRevisionToS3RequestDetails&& value) { SetExportRevisionToS3(std::move(value)); return *this;}

  private:

    AutoExportRevisionToS3RequestDetails m_exportRevisionToS3;
    bool m_exportRevisionToS3HasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
