﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Fleet.h>

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
namespace AppStream
{
namespace Model
{
  class AWS_APPSTREAM_API CreateFleetResult
  {
  public:
    CreateFleetResult();
    CreateFleetResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateFleetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The details for the created fleet.</p>
     */
    inline const Fleet& GetFleet() const{ return m_fleet; }

    /**
     * <p>The details for the created fleet.</p>
     */
    inline void SetFleet(const Fleet& value) { m_fleet = value; }

    /**
     * <p>The details for the created fleet.</p>
     */
    inline void SetFleet(Fleet&& value) { m_fleet = value; }

    /**
     * <p>The details for the created fleet.</p>
     */
    inline CreateFleetResult& WithFleet(const Fleet& value) { SetFleet(value); return *this;}

    /**
     * <p>The details for the created fleet.</p>
     */
    inline CreateFleetResult& WithFleet(Fleet&& value) { SetFleet(value); return *this;}

  private:
    Fleet m_fleet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
