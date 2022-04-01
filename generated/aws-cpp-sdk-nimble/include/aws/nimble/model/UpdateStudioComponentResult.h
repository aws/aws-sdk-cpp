﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StudioComponent.h>
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
namespace NimbleStudio
{
namespace Model
{
  class AWS_NIMBLESTUDIO_API UpdateStudioComponentResult
  {
  public:
    UpdateStudioComponentResult();
    UpdateStudioComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateStudioComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the studio component.</p>
     */
    inline const StudioComponent& GetStudioComponent() const{ return m_studioComponent; }

    /**
     * <p>Information about the studio component.</p>
     */
    inline void SetStudioComponent(const StudioComponent& value) { m_studioComponent = value; }

    /**
     * <p>Information about the studio component.</p>
     */
    inline void SetStudioComponent(StudioComponent&& value) { m_studioComponent = std::move(value); }

    /**
     * <p>Information about the studio component.</p>
     */
    inline UpdateStudioComponentResult& WithStudioComponent(const StudioComponent& value) { SetStudioComponent(value); return *this;}

    /**
     * <p>Information about the studio component.</p>
     */
    inline UpdateStudioComponentResult& WithStudioComponent(StudioComponent&& value) { SetStudioComponent(std::move(value)); return *this;}

  private:

    StudioComponent m_studioComponent;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
