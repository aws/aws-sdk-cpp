/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/Operation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API UpdateDistributionBundleResult
  {
  public:
    UpdateDistributionBundleResult();
    UpdateDistributionBundleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDistributionBundleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Operation& GetOperation() const{ return m_operation; }

    
    inline void SetOperation(const Operation& value) { m_operation = value; }

    
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }

    
    inline UpdateDistributionBundleResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    
    inline UpdateDistributionBundleResult& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}

  private:

    Operation m_operation;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
