/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  class AWS_DATAEXCHANGE_API OriginDetails
  {
  public:
    OriginDetails();
    OriginDetails(Aws::Utils::Json::JsonView jsonValue);
    OriginDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetProductId() const{ return m_productId; }

    
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    
    inline OriginDetails& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    
    inline OriginDetails& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    
    inline OriginDetails& WithProductId(const char* value) { SetProductId(value); return *this;}

  private:

    Aws::String m_productId;
    bool m_productIdHasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
