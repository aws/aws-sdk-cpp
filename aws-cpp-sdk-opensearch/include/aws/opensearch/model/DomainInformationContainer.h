/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AWSDomainInformation.h>
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
namespace OpenSearchService
{
namespace Model
{

  class AWS_OPENSEARCHSERVICE_API DomainInformationContainer
  {
  public:
    DomainInformationContainer();
    DomainInformationContainer(Aws::Utils::Json::JsonView jsonValue);
    DomainInformationContainer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AWSDomainInformation& GetAWSDomainInformation() const{ return m_aWSDomainInformation; }

    
    inline bool AWSDomainInformationHasBeenSet() const { return m_aWSDomainInformationHasBeenSet; }

    
    inline void SetAWSDomainInformation(const AWSDomainInformation& value) { m_aWSDomainInformationHasBeenSet = true; m_aWSDomainInformation = value; }

    
    inline void SetAWSDomainInformation(AWSDomainInformation&& value) { m_aWSDomainInformationHasBeenSet = true; m_aWSDomainInformation = std::move(value); }

    
    inline DomainInformationContainer& WithAWSDomainInformation(const AWSDomainInformation& value) { SetAWSDomainInformation(value); return *this;}

    
    inline DomainInformationContainer& WithAWSDomainInformation(AWSDomainInformation&& value) { SetAWSDomainInformation(std::move(value)); return *this;}

  private:

    AWSDomainInformation m_aWSDomainInformation;
    bool m_aWSDomainInformationHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
