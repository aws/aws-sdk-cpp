/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ControlPlaneTagFilter.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Filters to be applied to search results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QueueSearchFilter">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API QueueSearchFilter
  {
  public:
    QueueSearchFilter();
    QueueSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    QueueSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ControlPlaneTagFilter& GetTagFilter() const{ return m_tagFilter; }

    
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }

    
    inline void SetTagFilter(const ControlPlaneTagFilter& value) { m_tagFilterHasBeenSet = true; m_tagFilter = value; }

    
    inline void SetTagFilter(ControlPlaneTagFilter&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::move(value); }

    
    inline QueueSearchFilter& WithTagFilter(const ControlPlaneTagFilter& value) { SetTagFilter(value); return *this;}

    
    inline QueueSearchFilter& WithTagFilter(ControlPlaneTagFilter&& value) { SetTagFilter(std::move(value)); return *this;}

  private:

    ControlPlaneTagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
