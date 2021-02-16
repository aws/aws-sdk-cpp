﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/Extensions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

Extensions::Extensions() : 
    m_certificatePoliciesHasBeenSet(false),
    m_extendedKeyUsageHasBeenSet(false),
    m_keyUsageHasBeenSet(false),
    m_subjectAlternativeNamesHasBeenSet(false)
{
}

Extensions::Extensions(JsonView jsonValue) : 
    m_certificatePoliciesHasBeenSet(false),
    m_extendedKeyUsageHasBeenSet(false),
    m_keyUsageHasBeenSet(false),
    m_subjectAlternativeNamesHasBeenSet(false)
{
  *this = jsonValue;
}

Extensions& Extensions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificatePolicies"))
  {
    Array<JsonView> certificatePoliciesJsonList = jsonValue.GetArray("CertificatePolicies");
    for(unsigned certificatePoliciesIndex = 0; certificatePoliciesIndex < certificatePoliciesJsonList.GetLength(); ++certificatePoliciesIndex)
    {
      m_certificatePolicies.push_back(certificatePoliciesJsonList[certificatePoliciesIndex].AsObject());
    }
    m_certificatePoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtendedKeyUsage"))
  {
    Array<JsonView> extendedKeyUsageJsonList = jsonValue.GetArray("ExtendedKeyUsage");
    for(unsigned extendedKeyUsageIndex = 0; extendedKeyUsageIndex < extendedKeyUsageJsonList.GetLength(); ++extendedKeyUsageIndex)
    {
      m_extendedKeyUsage.push_back(extendedKeyUsageJsonList[extendedKeyUsageIndex].AsObject());
    }
    m_extendedKeyUsageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyUsage"))
  {
    m_keyUsage = jsonValue.GetObject("KeyUsage");

    m_keyUsageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubjectAlternativeNames"))
  {
    Array<JsonView> subjectAlternativeNamesJsonList = jsonValue.GetArray("SubjectAlternativeNames");
    for(unsigned subjectAlternativeNamesIndex = 0; subjectAlternativeNamesIndex < subjectAlternativeNamesJsonList.GetLength(); ++subjectAlternativeNamesIndex)
    {
      m_subjectAlternativeNames.push_back(subjectAlternativeNamesJsonList[subjectAlternativeNamesIndex].AsObject());
    }
    m_subjectAlternativeNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue Extensions::Jsonize() const
{
  JsonValue payload;

  if(m_certificatePoliciesHasBeenSet)
  {
   Array<JsonValue> certificatePoliciesJsonList(m_certificatePolicies.size());
   for(unsigned certificatePoliciesIndex = 0; certificatePoliciesIndex < certificatePoliciesJsonList.GetLength(); ++certificatePoliciesIndex)
   {
     certificatePoliciesJsonList[certificatePoliciesIndex].AsObject(m_certificatePolicies[certificatePoliciesIndex].Jsonize());
   }
   payload.WithArray("CertificatePolicies", std::move(certificatePoliciesJsonList));

  }

  if(m_extendedKeyUsageHasBeenSet)
  {
   Array<JsonValue> extendedKeyUsageJsonList(m_extendedKeyUsage.size());
   for(unsigned extendedKeyUsageIndex = 0; extendedKeyUsageIndex < extendedKeyUsageJsonList.GetLength(); ++extendedKeyUsageIndex)
   {
     extendedKeyUsageJsonList[extendedKeyUsageIndex].AsObject(m_extendedKeyUsage[extendedKeyUsageIndex].Jsonize());
   }
   payload.WithArray("ExtendedKeyUsage", std::move(extendedKeyUsageJsonList));

  }

  if(m_keyUsageHasBeenSet)
  {
   payload.WithObject("KeyUsage", m_keyUsage.Jsonize());

  }

  if(m_subjectAlternativeNamesHasBeenSet)
  {
   Array<JsonValue> subjectAlternativeNamesJsonList(m_subjectAlternativeNames.size());
   for(unsigned subjectAlternativeNamesIndex = 0; subjectAlternativeNamesIndex < subjectAlternativeNamesJsonList.GetLength(); ++subjectAlternativeNamesIndex)
   {
     subjectAlternativeNamesJsonList[subjectAlternativeNamesIndex].AsObject(m_subjectAlternativeNames[subjectAlternativeNamesIndex].Jsonize());
   }
   payload.WithArray("SubjectAlternativeNames", std::move(subjectAlternativeNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
