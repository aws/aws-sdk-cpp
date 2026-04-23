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

#include <aws/directconnect/model/DirectConnectGatewayAssociationProposalState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectConnect
  {
    namespace Model
    {
      namespace DirectConnectGatewayAssociationProposalStateMapper
      {

        static const int requested_HASH = HashingUtils::HashString("requested");
        static const int accepted_HASH = HashingUtils::HashString("accepted");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        DirectConnectGatewayAssociationProposalState GetDirectConnectGatewayAssociationProposalStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == requested_HASH)
          {
            return DirectConnectGatewayAssociationProposalState::requested;
          }
          else if (hashCode == accepted_HASH)
          {
            return DirectConnectGatewayAssociationProposalState::accepted;
          }
          else if (hashCode == deleted_HASH)
          {
            return DirectConnectGatewayAssociationProposalState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectConnectGatewayAssociationProposalState>(hashCode);
          }

          return DirectConnectGatewayAssociationProposalState::NOT_SET;
        }

        Aws::String GetNameForDirectConnectGatewayAssociationProposalState(DirectConnectGatewayAssociationProposalState enumValue)
        {
          switch(enumValue)
          {
          case DirectConnectGatewayAssociationProposalState::requested:
            return "requested";
          case DirectConnectGatewayAssociationProposalState::accepted:
            return "accepted";
          case DirectConnectGatewayAssociationProposalState::deleted:
            return "deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectConnectGatewayAssociationProposalStateMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
