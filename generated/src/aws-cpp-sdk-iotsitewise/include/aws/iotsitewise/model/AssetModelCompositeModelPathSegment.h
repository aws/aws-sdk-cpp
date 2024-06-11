﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Represents one level between a composite model and the root of the asset
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelCompositeModelPathSegment">AWS
   * API Reference</a></p>
   */
  class AssetModelCompositeModelPathSegment
  {
  public:
    AWS_IOTSITEWISE_API AssetModelCompositeModelPathSegment();
    AWS_IOTSITEWISE_API AssetModelCompositeModelPathSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelCompositeModelPathSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the path segment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssetModelCompositeModelPathSegment& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssetModelCompositeModelPathSegment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssetModelCompositeModelPathSegment& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the path segment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssetModelCompositeModelPathSegment& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssetModelCompositeModelPathSegment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssetModelCompositeModelPathSegment& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
