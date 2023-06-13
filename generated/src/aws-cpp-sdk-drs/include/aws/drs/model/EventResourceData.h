/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/SourceNetworkData.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Properties of resource related to a job event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/EventResourceData">AWS
   * API Reference</a></p>
   */
  class EventResourceData
  {
  public:
    AWS_DRS_API EventResourceData();
    AWS_DRS_API EventResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API EventResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Source Network properties.</p>
     */
    inline const SourceNetworkData& GetSourceNetworkData() const{ return m_sourceNetworkData; }

    /**
     * <p>Source Network properties.</p>
     */
    inline bool SourceNetworkDataHasBeenSet() const { return m_sourceNetworkDataHasBeenSet; }

    /**
     * <p>Source Network properties.</p>
     */
    inline void SetSourceNetworkData(const SourceNetworkData& value) { m_sourceNetworkDataHasBeenSet = true; m_sourceNetworkData = value; }

    /**
     * <p>Source Network properties.</p>
     */
    inline void SetSourceNetworkData(SourceNetworkData&& value) { m_sourceNetworkDataHasBeenSet = true; m_sourceNetworkData = std::move(value); }

    /**
     * <p>Source Network properties.</p>
     */
    inline EventResourceData& WithSourceNetworkData(const SourceNetworkData& value) { SetSourceNetworkData(value); return *this;}

    /**
     * <p>Source Network properties.</p>
     */
    inline EventResourceData& WithSourceNetworkData(SourceNetworkData&& value) { SetSourceNetworkData(std::move(value)); return *this;}

  private:

    SourceNetworkData m_sourceNetworkData;
    bool m_sourceNetworkDataHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
