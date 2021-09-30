/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/RevisionPublished.h>
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
namespace DataExchange
{
namespace Model
{

  class AWS_DATAEXCHANGE_API Event
  {
  public:
    Event();
    Event(Aws::Utils::Json::JsonView jsonValue);
    Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const RevisionPublished& GetRevisionPublished() const{ return m_revisionPublished; }

    
    inline bool RevisionPublishedHasBeenSet() const { return m_revisionPublishedHasBeenSet; }

    
    inline void SetRevisionPublished(const RevisionPublished& value) { m_revisionPublishedHasBeenSet = true; m_revisionPublished = value; }

    
    inline void SetRevisionPublished(RevisionPublished&& value) { m_revisionPublishedHasBeenSet = true; m_revisionPublished = std::move(value); }

    
    inline Event& WithRevisionPublished(const RevisionPublished& value) { SetRevisionPublished(value); return *this;}

    
    inline Event& WithRevisionPublished(RevisionPublished&& value) { SetRevisionPublished(std::move(value)); return *this;}

  private:

    RevisionPublished m_revisionPublished;
    bool m_revisionPublishedHasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
