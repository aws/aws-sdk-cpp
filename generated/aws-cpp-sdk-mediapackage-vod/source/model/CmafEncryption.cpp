﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/CmafEncryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

CmafEncryption::CmafEncryption() : 
    m_constantInitializationVectorHasBeenSet(false),
    m_spekeKeyProviderHasBeenSet(false)
{
}

CmafEncryption::CmafEncryption(JsonView jsonValue) : 
    m_constantInitializationVectorHasBeenSet(false),
    m_spekeKeyProviderHasBeenSet(false)
{
  *this = jsonValue;
}

CmafEncryption& CmafEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("constantInitializationVector"))
  {
    m_constantInitializationVector = jsonValue.GetString("constantInitializationVector");

    m_constantInitializationVectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spekeKeyProvider"))
  {
    m_spekeKeyProvider = jsonValue.GetObject("spekeKeyProvider");

    m_spekeKeyProviderHasBeenSet = true;
  }

  return *this;
}

JsonValue CmafEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_constantInitializationVectorHasBeenSet)
  {
   payload.WithString("constantInitializationVector", m_constantInitializationVector);

  }

  if(m_spekeKeyProviderHasBeenSet)
  {
   payload.WithObject("spekeKeyProvider", m_spekeKeyProvider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
