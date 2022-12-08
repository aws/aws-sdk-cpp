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
  class UpdateInstanceMetadataOptionsResult
  {
  public:
    AWS_LIGHTSAIL_API UpdateInstanceMetadataOptionsResult();
    AWS_LIGHTSAIL_API UpdateInstanceMetadataOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API UpdateInstanceMetadataOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Operation& GetOperation() const{ return m_operation; }

    
    inline void SetOperation(const Operation& value) { m_operation = value; }

    
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }

    
    inline UpdateInstanceMetadataOptionsResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    
    inline UpdateInstanceMetadataOptionsResult& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}

  private:

    Operation m_operation;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
