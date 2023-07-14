﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class AWS_TRANSLATE_API GetParallelDataRequest : public TranslateRequest
  {
  public:
    GetParallelDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParallelData"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the parallel data resource that is being retrieved.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parallel data resource that is being retrieved.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parallel data resource that is being retrieved.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parallel data resource that is being retrieved.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parallel data resource that is being retrieved.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parallel data resource that is being retrieved.</p>
     */
    inline GetParallelDataRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parallel data resource that is being retrieved.</p>
     */
    inline GetParallelDataRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parallel data resource that is being retrieved.</p>
     */
    inline GetParallelDataRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
