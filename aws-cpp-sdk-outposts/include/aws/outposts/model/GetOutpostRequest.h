/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class AWS_OUTPOSTS_API GetOutpostRequest : public OutpostsRequest
  {
  public:
    GetOutpostRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOutpost"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    
    inline GetOutpostRequest& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    
    inline GetOutpostRequest& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    
    inline GetOutpostRequest& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}

  private:

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
